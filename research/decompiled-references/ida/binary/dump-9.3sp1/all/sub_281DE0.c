__int64 __fastcall sub_281DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  int tinfo_size; // r14d
  unsigned int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // [rsp+8h] [rbp-40h] BYREF
  _BYTE v15[8]; // [rsp+10h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  v16 = __readfsqword(0x28u);
  sub_2436E0(&v14, a2, a1, v4 + 48, (_QWORD *)(v3 + 48), (_BYTE *)(*(_QWORD *)(a1 + 40) + 48LL), 0);
  if ( (unsigned int)(*(_DWORD *)(a1 + 8) - 22) <= 9 || (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
  {
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
    {
      v8 = 0;
      goto LABEL_4;
    }
    v11 = sub_255000(*(_DWORD *)(a1 + 8));
    v12 = v11;
    v13 = *(_QWORD *)(a2 + 112);
    if ( !v11 )
      v12 = 1;
    sub_32C430(v15, v13, (unsigned int)tinfo_size, v12);
    copy_tinfo_t();
    clear_tinfo_t();
  }
  sub_244E70(a3, (__int64)&v14, v6, v7);
  v8 = 1;
LABEL_4:
  clear_tinfo_t();
  return v8;
}
