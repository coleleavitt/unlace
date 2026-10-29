__int64 __fastcall sub_7F2170(_QWORD *a1, unsigned __int64 *a2, __int64 a3)
{
  char *v3; // rbx
  unsigned int v4; // r14d
  unsigned int v7; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rax
  void *v13; // rdi
  void *v14; // rdi
  void *v15; // rdi
  char *v16; // rax
  __int64 v17; // r15
  __int64 v18; // rbp
  unsigned __int64 v19; // [rsp+0h] [rbp-138h]
  __int64 v20; // [rsp+0h] [rbp-138h]
  unsigned int v21; // [rsp+10h] [rbp-128h]
  __int64 v22; // [rsp+18h] [rbp-120h]
  __int64 v23; // [rsp+18h] [rbp-120h]
  unsigned int v24; // [rsp+24h] [rbp-114h] BYREF
  char *v25; // [rsp+28h] [rbp-110h] BYREF
  __int64 v26; // [rsp+30h] [rbp-108h] BYREF
  __int128 v27; // [rsp+38h] [rbp-100h]
  __int64 v28; // [rsp+48h] [rbp-F0h]
  __int64 v29; // [rsp+50h] [rbp-E8h]
  __int128 v30; // [rsp+58h] [rbp-E0h]
  __int64 v31; // [rsp+68h] [rbp-D0h]
  __int64 v32; // [rsp+70h] [rbp-C8h]
  __int128 v33; // [rsp+78h] [rbp-C0h]
  int v34; // [rsp+88h] [rbp-B0h]
  const void *v35[11]; // [rsp+90h] [rbp-A8h] BYREF
  int v36; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+F8h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v25 = (char *)*a2;
  v3 = &v25[a3];
  if ( !__CFADD__(a3, v25) )
  {
    LOBYTE(v7) = sub_7E30F0(&v24, (unsigned __int64 *)&v25);
    v4 = v7;
    if ( (_BYTE)v7 )
    {
      v8 = v24;
      v9 = a1[3];
      v21 = v24;
      v19 = v9;
      if ( v24 != v9 )
      {
        v26 = 0;
        v28 = 0;
        v29 = 0;
        v31 = 0;
        v32 = 0;
        v34 = 0;
        v27 = 0;
        v30 = 0;
        v33 = 0;
        if ( v24 < v9 )
        {
          v11 = v24;
          do
          {
            v12 = a1[2] + 96 * v11;
            v13 = *(void **)(v12 + 64);
            if ( v13 )
            {
              *(_QWORD *)(v12 + 72) = 0;
              v22 = v12;
              qfree(v13);
              v12 = v22;
            }
            v14 = *(void **)(v12 + 32);
            if ( v14 )
            {
              *(_QWORD *)(v12 + 40) = 0;
              v23 = v12;
              qfree(v14);
              v12 = v23;
            }
            v15 = *(void **)v12;
            if ( *(_QWORD *)v12 )
            {
              *(_QWORD *)(v12 + 8) = 0;
              qfree(v15);
            }
            ++v11;
          }
          while ( v11 < v19 );
          a1[3] = v8;
        }
        else
        {
          v10 = a1[2];
          if ( (unsigned __int64)&v26 < v10 || (unsigned __int64)&v26 >= 96LL * a1[4] + v10 )
          {
            sub_7F1FD0(a1 + 2, v24, (__int64)&v26);
          }
          else
          {
            sub_7EE140((__int64)v35, (__int64)&v26);
            v36 = 0;
            sub_7F1FD0(a1 + 2, v8, (__int64)v35);
            sub_7E2290((__int64)v35);
          }
        }
        sub_7E2290((__int64)&v26);
      }
      v16 = v25;
      if ( !v21 )
      {
LABEL_26:
        *a2 = (unsigned __int64)v16;
        return v4;
      }
      v20 = 96 * v8;
      v17 = 0;
      while ( 1 )
      {
        v35[0] = v16;
        if ( v3 < v16 )
          break;
        v18 = v17 + a1[2];
        if ( !(unsigned __int8)sub_7E5730(v18, v35, v3 - v16)
          || !sub_7E30F0((_DWORD *)(v18 + 88), (unsigned __int64 *)v35) )
        {
          break;
        }
        v16 = (char *)v35[0];
        v17 += 96;
        v25 = (char *)v35[0];
        if ( v20 == v17 )
          goto LABEL_26;
      }
    }
  }
  return 0;
}
