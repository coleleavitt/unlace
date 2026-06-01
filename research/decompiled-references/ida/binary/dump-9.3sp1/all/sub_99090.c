__int64 __fastcall sub_99090(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5, int a6)
{
  unsigned int v6; // r13d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 v13; // r14
  int v14; // eax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r15d
  int v20; // eax
  int v21; // r8d
  int v22; // r9d
  int v23; // [rsp+0h] [rbp-A8h]
  int v24; // [rsp+8h] [rbp-A0h]
  __int64 v25; // [rsp+10h] [rbp-98h] BYREF
  void *src; // [rsp+20h] [rbp-88h]
  __int128 v27; // [rsp+28h] [rbp-80h]
  __int64 v28[2]; // [rsp+40h] [rbp-68h] BYREF
  void *v29; // [rsp+50h] [rbp-58h]
  __int128 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  v6 = 0;
  v31 = __readfsqword(0x28u);
  if ( *a3 )
  {
    v27 = 0;
    sub_127FE0(a1, (__int64)&v25, (__int64)a3, 0, a5, a6, v23, v24, 0, 0, 0);
    sub_64000(v28, (__int64)&v25);
    v12 = v27;
    v29 = nullptr;
    v30 = 0;
    if ( (_QWORD)v27 )
    {
      v29 = (void *)qalloc_or_throw(16 * v27, (__int64)&v25, v10, v11);
      *((_QWORD *)&v30 + 1) = v12;
      memcpy(v29, src, 16 * v12);
      *(_QWORD *)&v30 = v12;
    }
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
    do
    {
      v17 = *(_QWORD *)(a2 + 8);
      if ( !v17 )
        break;
      v18 = sub_A9D90(a1, &v25, v17, 0, 1);
      a2 = v18;
      if ( !v18 )
        break;
      v19 = v18 + 32;
      v20 = sub_129FA0(a3, v13, v18 + 32);
      if ( (unsigned int)(v20 - 2) > 1 || !(unsigned __int8)sub_AB6D0(a1, a2, v19, (v20 != 2) | 2u, v21, v22) )
      {
        v14 = sub_129FA0(a3, v13, a2 + 48);
        if ( (unsigned int)(v14 - 2) > 1 || !(unsigned __int8)sub_AB6D0(a1, a2, (int)a2 + 48, (v14 != 2) | 2u, v15, v16) )
          continue;
      }
      v6 = 1;
      goto LABEL_16;
    }
    while ( !(unsigned int)sub_122C30(v28, &v25) );
    v6 = 0;
LABEL_16:
    if ( v29 )
    {
      *(_QWORD *)&v30 = 0;
      qfree((__int64)v29);
    }
    qfree(v28[0]);
    if ( src )
    {
      *(_QWORD *)&v27 = 0;
      qfree((__int64)src);
    }
    qfree(v25);
  }
  return v6;
}
