__int64 __fastcall sub_BD380(__int64 a1, __int64 *a2, char *a3)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // ebx
  __int64 tinfo_property; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v11[6]; // [rsp+18h] [rbp-30h] BYREF

  v3 = (__int64 *)(a1 + 48);
  v4 = *(v3 - 5);
  v11[1] = __readfsqword(0x28u);
  v10 = 0;
  v5 = sub_B61B0(v4, &v10, 0, 0, a3, *(_QWORD *)(v4 + 800), 0, 0, v3);
  if ( (_BYTE)v5 )
  {
    v11[0] = 0;
    tinfo_property = get_tinfo_property(v10, 13);
    v11[0] = tinfo_property;
    if ( (_BYTE)tinfo_property
      || (clear_tinfo_t(v11),
          v11[0] = 0,
          v11[0] = get_tinfo_property(v10, 18),
          copy_tinfo_t(&v10, v11),
          clear_tinfo_t(v11),
          v11[0] = 0,
          tinfo_property = get_tinfo_property(v10, 13),
          v11[0] = tinfo_property,
          (_BYTE)tinfo_property) )
    {
      v8 = v10;
      v10 = tinfo_property;
      v11[0] = v8;
      clear_tinfo_t(v11);
      if ( (get_tinfo_property(v10, 2) & 0x2F) == 0xD )
      {
        v9 = v10;
        v10 = *a2;
        *a2 = v9;
        goto LABEL_3;
      }
    }
    else
    {
      clear_tinfo_t(v11);
    }
  }
  v5 = 0;
LABEL_3:
  clear_tinfo_t(&v10);
  return v5;
}
