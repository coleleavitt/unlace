__int64 __fastcall sub_155D40(__int128 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r13
  bool v8; // zf
  int v9; // r8d
  int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r8
  int v14; // r9d
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // [rsp+0h] [rbp-B8h]
  __int64 v26; // [rsp+10h] [rbp-A8h]
  __int64 v28[2]; // [rsp+20h] [rbp-98h] BYREF
  __int64 v29; // [rsp+30h] [rbp-88h] BYREF
  __int128 v30; // [rsp+38h] [rbp-80h]
  __int64 v31[2]; // [rsp+50h] [rbp-68h] BYREF
  __int64 v32; // [rsp+60h] [rbp-58h] BYREF
  __int64 v33; // [rsp+68h] [rbp-50h]
  unsigned __int64 v34; // [rsp+78h] [rbp-40h]

  v5 = a1;
  v8 = *(_BYTE *)a2 == 4;
  v24 = *((_QWORD *)&a1 + 1);
  v34 = __readfsqword(0x28u);
  v26 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( v8 && (unsigned __int8)sub_1205A0(*(_BYTE **)(a2 + 8), v26, 0, a3, a4, a5) )
    return sub_155AA0(v5, (_BYTE *)v24, a2, a5, v13, v14);
  *((_QWORD *)&a1 + 1) = v28;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  v30 = 0;
  sub_123EA0(a1, a2, 1, 0xFFFF0000);
  if ( !sub_A9AA0(a1, v28, a3, a4, 1u) )
    goto LABEL_29;
  v11 = *(_QWORD *)(v24 + 16);
  if ( !v11 )
  {
LABEL_12:
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree(v29);
    }
    qfree(v28[0]);
    return sub_155AA0(v5, (_BYTE *)v24, a2, a5, v13, v14);
  }
  while ( *(_DWORD *)(a2 + 4) > *(_DWORD *)(v11 + 68)
       || !*(_BYTE *)(v11 + 64)
       || *(_BYTE *)a2 != 4
       || !sub_125B90(*(unsigned __int8 **)(a2 + 8), v26, (unsigned int *)v11, 1u) )
  {
LABEL_7:
    sub_127A20((__int64)v31, v5, v11, 1, v9, v10);
    if ( (unsigned __int8)sub_64780(v28, v31) )
    {
      v12 = v32;
LABEL_9:
      if ( v12 )
      {
        v33 = 0;
        qfree(v12);
      }
      qfree(v31[0]);
      goto LABEL_12;
    }
    v16 = sub_318470(&v29, &v32);
    v12 = v32;
    if ( v16 )
      goto LABEL_9;
    if ( v32 )
    {
      v33 = 0;
      qfree(v32);
    }
    qfree(v31[0]);
    v11 = *(_QWORD *)(v11 + 16);
    if ( !v11 )
      goto LABEL_12;
  }
  sub_123A40((__int64)v31, (unsigned __int8 *)(v11 + 64), v17, v18);
  sub_12AB50((unsigned __int8 *)v31, v26, *(_DWORD *)(a2 + 4), 0);
  if ( (unsigned __int8)sub_A9CB0(v5, (__int64)v31, *(_QWORD *)(v11 + 8), a4) )
  {
    sub_11CDA0((__int64)v31);
    goto LABEL_7;
  }
  if ( a5 )
  {
    sub_155800((unsigned int *)a5);
    *(_DWORD *)a5 = 1;
    v21 = j__qalloc_or_throw(16, (__int64)v31, v19, v20);
    sub_123A40(v21, (unsigned __int8 *)a2, v22, v23);
    *(_QWORD *)(a5 + 32) = v21;
    *(_QWORD *)(a5 + 8) = a2;
  }
  sub_11CA10((char *)a2, (char *)v31);
  sub_11CDA0((__int64)v31);
LABEL_29:
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    qfree(v29);
  }
  qfree(v28[0]);
  return 1;
}
