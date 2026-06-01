__int64 __fastcall sub_7B4F60(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned int v5; // r13d
  __int16 v7; // r15
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // r15
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  unsigned int v17; // [rsp+4h] [rbp-74h]
  int v18; // [rsp+8h] [rbp-70h]
  char v19; // [rsp+Fh] [rbp-69h]
  _WORD *v20; // [rsp+10h] [rbp-68h]
  __int64 v21; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v23; // [rsp+28h] [rbp-50h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( a2 == -1 )
    return 0;
  v7 = a5;
  v10 = sub_7B7480(a1, a2, a3, a5);
  if ( v10 >= a4 )
  {
    return 0;
  }
  else
  {
    v19 = v7;
    v5 = 0;
    v18 = v7 & 0x800;
    v17 = v7 & 0x100;
    v20 = (_WORD *)(a1 + 53);
    do
    {
      v13 = v10;
      if ( v17 && unk_2CD46C8 )
        v13 = unk_2CD46C8(v10);
      *(_WORD *)(a1 + 53) = 10;
      *(_QWORD *)(a1 + 56) = swap64(a2);
      *(_BYTE *)(a1 + 64) = v19;
      v15 = *(_WORD *)(a1 + 53);
      if ( v18 )
      {
        if ( v15 == 0xFFFF )
          goto LABEL_26;
        *(_BYTE *)(a1 + 65) = v13;
        *(_WORD *)(a1 + 53) = v15 + 1;
      }
      else
      {
        if ( v15 + 8 > 0xFFFF )
LABEL_26:
          abort();
        *(_WORD *)(a1 + 53) = v15 + 8;
        *(_QWORD *)(a1 + 65) = swap64(v13);
      }
      v11 = *(_QWORD *)a1;
      if ( *(_BYTE *)(*(_QWORD *)a1 + 6020LL)
        && (v21 = *(_QWORD *)a1, v12 = must_journal(v11, v17, v14), v11 = v21, v12) )
      {
        ptr = nullptr;
        v23 = 0;
        if ( !(unsigned __int8)sub_73A6B0(v21, v20, (__int64)&ptr) )
        {
          if ( ptr )
          {
            *(_QWORD *)&v23 = 0;
            qfree(ptr);
          }
LABEL_21:
          if ( !under_debugger )
            interr(259);
          BUG();
        }
        add_undo_record(1, ptr, v23);
        if ( ptr )
        {
          *(_QWORD *)&v23 = 0;
          qfree(ptr);
        }
      }
      else if ( !(unsigned __int8)sub_73A6B0(v11, v20, 0) )
      {
        goto LABEL_21;
      }
      ++v5;
      v10 = sub_7B7340(a1, a2, v10, a5);
    }
    while ( v10 < a4 );
  }
  return v5;
}
