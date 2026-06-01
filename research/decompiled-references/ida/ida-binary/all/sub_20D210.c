__int64 __fastcall sub_20D210(_QWORD *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rbx
  int v8; // eax
  _QWORD *v9; // r10
  __int64 v10; // r15
  int v11; // r11d
  int v12; // r13d
  int v13; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  int v20; // [rsp+Ch] [rbp-ACh]
  _QWORD *v21; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-A0h]
  int v23; // [rsp+20h] [rbp-98h]
  int v24; // [rsp+30h] [rbp-88h] BYREF
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int128 v26; // [rsp+40h] [rbp-78h]
  int v27; // [rsp+50h] [rbp-68h] BYREF
  __int64 v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+60h] [rbp-58h]
  unsigned __int64 v30; // [rsp+78h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( (a2 & 0x80000000) != 0 )
    return 0;
  v5 = xmmword_8CC398;
  if ( a2 >= (unsigned __int64)xmmword_8CC398 )
    return 0;
  v6 = qword_8CC390;
  v7 = qword_8CC390 + 56LL * a2;
  if ( !a3 || !v7 )
    return 0;
  v21 = a1;
  v8 = *(_DWORD *)(v7 + 44);
  v9 = a1;
  v22 = 0;
  v23 = 0;
  if ( !a1 )
    goto LABEL_11;
  v10 = dbg;
  v11 = *(_DWORD *)(dbg + 64LL);
  if ( v8 > v11 )
    v8 = *(_DWORD *)(dbg + 64LL);
  v12 = v8;
  v13 = 0;
  while ( v13 < v12 )
  {
    v20 = a4;
    sub_20D150((__int64)&v21);
    v13 = v22;
    a4 = v20;
    if ( (int)v22 < 0 )
      goto LABEL_11;
  }
  if ( (int)v22 >= v11
    || (v19 = *(unsigned __int8 *)(*v9 + ((unsigned __int64)(int)v22 >> 3)), !_bittest(&v19, v22 & 7)) )
  {
LABEL_11:
    if ( !(_BYTE)a4 )
      return 0;
    v10 = dbg;
    v11 = *(_DWORD *)(dbg + 64LL);
  }
  if ( a2 >= v11 )
  {
    v24 = -2;
    v25 = -1;
    v26 = 0;
    if ( (int)v22 >= 0 && (int)v22 < v5 && (v15 = v6 + 56LL * (int)v22) != 0 )
    {
      v16 = *(int *)(v15 + 44);
      if ( v11 > (int)v16
        && (v17 = *(_QWORD *)(v10 + 56) + 32 * v16, (*(_BYTE *)(v17 + 9) & 1) == 0)
        && *(_QWORD *)(v17 + 16)
        && v9[7] )
      {
        v18 = *(_QWORD *)(v9[6] + 8LL * v23);
      }
      else
      {
        v18 = sub_235E50(v15);
      }
    }
    else
    {
      v18 = 0;
    }
    v25 = v18;
    sub_235EE0(&v27, v7, &v24);
    if ( v27 < -1 )
    {
      if ( v28 )
      {
LABEL_40:
        if ( v24 >= -1 && v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree(v25, (const char *)v7);
        }
        goto LABEL_14;
      }
    }
    else if ( v28 )
    {
      v29 = 0;
      qfree(v28, (const char *)v7);
      goto LABEL_40;
    }
    if ( v24 >= -1 && v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, (const char *)v7);
    }
    return 0;
  }
LABEL_14:
  sub_20D070((__int64)&v24, (int *)&v21);
  sub_235EE0(&v27, v7, &v24);
  sub_20BB80(a3, (__int64)&v27);
  if ( v27 >= -1 && v28 )
  {
    v29 = 0;
    qfree(v28, (const char *)&v27);
  }
  if ( v24 >= -1 )
  {
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25, (const char *)&v27);
    }
  }
  return 1;
}
