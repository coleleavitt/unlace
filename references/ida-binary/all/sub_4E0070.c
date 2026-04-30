__int64 __fastcall sub_4E0070(
        __int64 a1,
        const char *a2,
        __int64 *a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        double a8)
{
  int v8; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // r13
  unsigned __int64 v13; // rbx
  int v14; // edx
  unsigned __int8 v15; // al
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rdx
  const char *v19; // rsi
  __int64 v20; // rdi
  char v21; // dl
  int v22; // edx
  __int64 v23; // rdx
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  const char *v30; // [rsp-8h] [rbp-A8h]
  unsigned __int8 v32; // [rsp+Fh] [rbp-91h]
  unsigned __int8 v33; // [rsp+Fh] [rbp-91h]
  unsigned __int8 v35; // [rsp+18h] [rbp-88h]
  unsigned __int64 v36; // [rsp+18h] [rbp-88h]
  __int64 v37; // [rsp+20h] [rbp-80h] BYREF
  __int64 v38; // [rsp+28h] [rbp-78h]
  __int128 v39; // [rsp+30h] [rbp-70h] BYREF
  __int128 v40; // [rsp+40h] [rbp-60h]
  __int128 v41; // [rsp+50h] [rbp-50h]
  unsigned __int64 v42; // [rsp+68h] [rbp-38h]

  v8 = *(_DWORD *)a4;
  v42 = __readfsqword(0x28u);
  v10 = ~(_BYTE)v8 & 3;
  LOBYTE(v10) = (~(_BYTE)v8 & 3) == 0 && a2 == nullptr;
  v32 = v10;
  if ( (_BYTE)v10 )
  {
    if ( !under_debugger )
      interr(40525, a2, v10, a4, a5);
    BUG();
  }
  v11 = a3[1];
  if ( (v8 & 0x5000) != 0x1000 )
  {
    v13 = 0;
    if ( !v11 )
      return v32;
    while ( 1 )
    {
      if ( v13 < 8LL * *(_QWORD *)(a4 + 16) )
      {
        v14 = *(unsigned __int8 *)(*(_QWORD *)(a4 + 8) + (v13 >> 3));
        v15 = _bittest(&v14, v13 & 7);
        if ( v15 )
        {
          v16 = *a3 + 24 * v13;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          v17 = sub_4D89F0(a1 + 1128, *(_DWORD *)v16, 0);
          v38 = v18;
          v19 = (const char *)&v39;
          v37 = v17;
          v15 = sub_4DA730((int *)a4, &v39, (size_t *)&v37, *(_QWORD *)(v16 + 16), 0.0);
          if ( v15 )
          {
            v33 = v15;
            sub_4DFF20(a1, a2, (_BYTE *)a4, a3, (__int64)&v39, (__int64)&v37, 0.0, a6, a7, a8, v13);
            v20 = v39;
            v15 = v33;
            v19 = v30;
            if ( !(_QWORD)v39 )
              return 1;
LABEL_8:
            v35 = v15;
            *((_QWORD *)&v39 + 1) = 0;
            qfree(v20, v19);
            v15 = v35;
          }
          else
          {
            v20 = v39;
            if ( (_QWORD)v39 )
              goto LABEL_8;
          }
          v21 = v15 ^ 1;
          goto LABEL_10;
        }
        v21 = 1;
      }
      else
      {
        v15 = 0;
        v21 = 1;
      }
LABEL_10:
      if ( ++v13 >= v11 || !v21 )
        return v15;
    }
  }
  v36 = 0;
  if ( !v11 )
    return 1;
  while ( 1 )
  {
    if ( v36 < 8LL * *(_QWORD *)(a4 + 16) )
    {
      v22 = *(unsigned __int8 *)(*(_QWORD *)(a4 + 8) + (v36 >> 3));
      if ( _bittest(&v22, v36 & 7) )
        break;
    }
LABEL_23:
    if ( ++v36 >= v11 )
      return 1;
  }
  v23 = *a3;
  v39 = 0;
  v24 = v23 + 24 * v36;
  v40 = 0;
  v41 = 0;
  v25 = sub_4D89F0(a1 + 1128, *(_DWORD *)v24, 0);
  v38 = v26;
  v37 = v25;
  if ( sub_4DA730((int *)a4, &v39, (size_t *)&v37, *(_QWORD *)(v24 + 16), 0.0) )
  {
    sub_4DFF20(a1, a2, (_BYTE *)a4, a3, (__int64)&v39, (__int64)&v37, 0.0, a6, a7, a8, v36);
    if ( (_QWORD)v39 )
    {
      *((_QWORD *)&v39 + 1) = 0;
      qfree(v39, a2, v28, v29);
    }
    goto LABEL_23;
  }
  if ( (_QWORD)v39 )
  {
    *((_QWORD *)&v39 + 1) = 0;
    qfree(v39, (const char *)&v39);
  }
  return v32;
}
