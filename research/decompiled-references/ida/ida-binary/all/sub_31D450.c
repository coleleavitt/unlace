__int64 __fastcall sub_31D450(_QWORD *a1, char a2)
{
  _QWORD **v3; // rdi
  __int64 v5; // rax
  char v6; // r12
  __int64 v7; // r13
  unsigned int v8; // r13d
  const char *v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-48h] BYREF
  const char *v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  v3 = (_QWORD **)*a1;
  if ( v3 )
  {
    v5 = ((__int64 (__fastcall *)(_QWORD **, _QWORD))(*v3)[3])(v3, *v3[2]);
    v6 = *(_BYTE *)(v5 + 64);
    v7 = v5;
    if ( !v6 )
      v6 = *(_QWORD *)(v5 + 56) == -1;
    sub_31CCE0(a1);
    v8 = *(unsigned __int8 *)(v7 + 64);
    if ( (_BYTE)v8 )
    {
      if ( !*((_BYTE *)a1 + 74) && !a2 )
      {
        sub_17DEF0((__int64)&v11, "Save snippet", "Save snippet");
        v10 = v12;
        sub_1C7660();
        if ( v11 )
        {
          v12 = nullptr;
          qfree(v11, v10);
        }
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 64LL))(*a1, 0);
    }
    sub_31D3F0(a1, v6);
    *((_BYTE *)a1 + 74) = a2;
  }
  else
  {
    return 0;
  }
  return v8;
}
