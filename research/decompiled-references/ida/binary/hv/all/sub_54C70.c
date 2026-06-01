__int64 __fastcall sub_54C70(__int64 *a1, char **a2, __int64 a3)
{
  char *v3; // rbx
  unsigned int v4; // r14d
  __int64 v7; // r14
  int v8; // eax
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  _QWORD *v14; // rax
  void *v15; // rdi
  void *v16; // rdi
  void *v17; // rdi
  int v18; // [rsp+0h] [rbp-138h]
  __int64 v19; // [rsp+0h] [rbp-138h]
  __int64 v20; // [rsp+0h] [rbp-138h]
  unsigned __int64 v21; // [rsp+0h] [rbp-138h]
  __int64 v22; // [rsp+8h] [rbp-130h]
  unsigned __int64 v23; // [rsp+10h] [rbp-128h]
  unsigned __int64 v24; // [rsp+18h] [rbp-120h]
  unsigned int v25; // [rsp+24h] [rbp-114h]
  _QWORD *v26; // [rsp+28h] [rbp-110h]
  _QWORD *v27; // [rsp+28h] [rbp-110h]
  unsigned int v28; // [rsp+34h] [rbp-104h] BYREF
  char *v29; // [rsp+38h] [rbp-100h] BYREF
  __int128 v30; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v31; // [rsp+50h] [rbp-E8h] BYREF
  __int128 v32; // [rsp+58h] [rbp-E0h]
  __int64 v33; // [rsp+68h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+70h] [rbp-C8h]
  __int64 v35; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v36; // [rsp+88h] [rbp-B0h]
  _QWORD v37[2]; // [rsp+A0h] [rbp-98h] BYREF
  void *ptr; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v39; // [rsp+B8h] [rbp-80h]
  void *v40; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v41; // [rsp+D0h] [rbp-68h]
  __int64 v42; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v43; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+F8h] [rbp-40h]

  v44 = __readfsqword(0x28u);
  v29 = *a2;
  v3 = &v29[a3];
  if ( !__CFADD__(a3, v29) && sub_4A460(v37, (unsigned __int64 *)&v29, (__int64)&v29[a3]) )
  {
    v7 = LODWORD(v37[0]);
    v8 = v37[0];
    if ( LODWORD(v37[0]) != a1[3] )
    {
      v18 = v37[0];
      sub_40550(a1 + 2, LODWORD(v37[0]));
      v8 = v18;
    }
    v19 = 32 * v7;
    v9 = 0;
    if ( v8 )
    {
      while ( (unsigned __int8)sub_4DA00(v9 + a1[2], (const void **)&v29, v3 - v29) )
      {
        v9 += 32;
        if ( v19 == v9 )
          goto LABEL_10;
      }
    }
    else
    {
LABEL_10:
      LOBYTE(v10) = sub_4A460(&v28, (unsigned __int64 *)&v29, (__int64)v3);
      v4 = v10;
      if ( (_BYTE)v10 )
      {
        v11 = a1[6];
        v25 = v28;
        v24 = v28;
        v23 = v11;
        if ( v28 != v11 )
        {
          v31 = 0;
          v30 = 0;
          v33 = 0;
          v35 = 0;
          v32 = 0;
          v34 = 0;
          v36 = 0;
          if ( v28 < v11 )
          {
            v21 = v28;
            v22 = 88LL * v28;
            do
            {
              v14 = (_QWORD *)(a1[5] + v22);
              v15 = (void *)v14[8];
              if ( v15 )
              {
                v14[9] = 0;
                v26 = v14;
                j__free(v15);
                v14 = v26;
              }
              v16 = (void *)v14[5];
              if ( v16 )
              {
                v14[6] = 0;
                v27 = v14;
                j__free(v16);
                v14 = v27;
              }
              v17 = (void *)v14[2];
              if ( v17 )
              {
                v14[3] = 0;
                j__free(v17);
              }
              ++v21;
              v22 += 88;
            }
            while ( v21 < v23 );
            a1[6] = v24;
            sub_52C00(&v30);
          }
          else
          {
            v12 = a1[5];
            if ( (unsigned __int64)&v30 < v12 || (unsigned __int64)&v30 >= v12 + 88 * a1[7] )
            {
              sub_54A90(a1 + 5, v28, (__int64)&v30);
            }
            else
            {
              v37[0] = 0;
              v37[1] = 0;
              ptr = nullptr;
              v39 = 0;
              sub_3C440(&ptr, (__int64)&v31);
              v40 = nullptr;
              v41 = 0;
              sub_3C440(&v40, (__int64)&v33);
              v42 = 0;
              v43 = 0;
              sub_3C440(&v42, (__int64)&v35);
              sub_54A90(a1 + 5, v24, (__int64)v37);
              sub_52C00(v37);
            }
            sub_52C00(&v30);
          }
        }
        if ( !v25 )
        {
LABEL_21:
          *a2 = v29;
          return v4;
        }
        v13 = 0;
        while ( 1 )
        {
          v20 = v13;
          if ( !(unsigned __int8)sub_50820(a1[5] + v13, (const void **)&v29, v3 - v29) )
            break;
          v13 = v20 + 88;
          if ( 88 * v24 == v20 + 88 )
            goto LABEL_21;
        }
      }
    }
  }
  return 0;
}

