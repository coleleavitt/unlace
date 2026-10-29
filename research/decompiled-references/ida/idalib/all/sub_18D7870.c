unsigned __int64 __fastcall sub_18D7870(
        __int64 a1,
        const __m128i *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  int *v6; // r14
  void *v7; // r13
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  int *v11; // rbp
  int v12; // eax
  int *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  int v17; // r9d
  _DWORD *v18; // rbp
  int v19; // ebp
  unsigned int v20; // edx
  int v21; // [rsp+4h] [rbp-394h]
  void *v22; // [rsp+10h] [rbp-388h] BYREF
  __int64 v23; // [rsp+18h] [rbp-380h]
  _DWORD v24[4]; // [rsp+20h] [rbp-378h] BYREF
  _BYTE v25[144]; // [rsp+30h] [rbp-368h] BYREF
  _QWORD v26[6]; // [rsp+C0h] [rbp-2D8h] BYREF
  void *v27; // [rsp+F0h] [rbp-2A8h]
  _DWORD v28[130]; // [rsp+108h] [rbp-290h] BYREF
  void *ptr; // [rsp+310h] [rbp-88h]
  __int64 v30; // [rsp+318h] [rbp-80h]
  _DWORD v31[11]; // [rsp+328h] [rbp-70h] BYREF
  char v32; // [rsp+354h] [rbp-44h]

  v6 = (int *)a2;
  v7 = nullptr;
  v8 = a3;
  if ( **(char **)(a1 + 232) < 0 )
  {
    sub_18D5BA0((__int64)v26, a1, a2, a3, a5, a6);
    v6 = (int *)v26[0];
    v7 = (void *)v26[0];
    v8 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v26[1] - v26[0]) >> 3);
  }
  sub_13EE5A0((__int64)v26, v6, v8, *(_QWORD **)(a1 + 240), 1);
  if ( v32 )
  {
    v9 = 1;
  }
  else
  {
    v23 = 0x400000000LL;
    v11 = &v6[6 * v8];
    v22 = v24;
    if ( v6 == v11 )
    {
      v15 = 0;
      v18 = v24;
    }
    else
    {
      v12 = *v6;
      v13 = v6 + 6;
      LODWORD(v23) = 1;
      v24[0] = v12;
      if ( v11 == v13 )
      {
        v15 = 1;
      }
      else
      {
        v14 = 1;
        v15 = 1;
        do
        {
          while ( 1 )
          {
            v16 = v15 + 1;
            v17 = *v13;
            if ( v16 > HIDWORD(v23) )
              break;
            v13 += 6;
            *((_DWORD *)v22 + v14) = v17;
            v14 = (unsigned int)(v23 + 1);
            LODWORD(v23) = v14;
            v15 = (unsigned int)v14;
            if ( v11 == v13 )
              goto LABEL_17;
          }
          v13 += 6;
          v21 = v17;
          sub_2237220(&v22, v24, v16, 4);
          *((_DWORD *)v22 + (unsigned int)v23) = v21;
          v15 = (unsigned int)(v23 + 1);
          v14 = v15;
          LODWORD(v23) = v23 + 1;
        }
        while ( v11 != v13 );
      }
LABEL_17:
      v18 = v22;
    }
    v9 = sub_C09810(*(_QWORD **)(a1 + 248), v27, (unsigned int)(v28[128] - (_DWORD)v27), 5u, 0, 0, (__int64)v18, v15);
    if ( v30 )
    {
      v19 = *((_DWORD *)v22 + v31[8]);
      v20 = v19 + sub_13D1C70(v19, v31[9], *(_QWORD *)(a1 + 272), *(_QWORD *)(a1 + 232));
      v9 = 1;
      sub_168B9F0((__int64)v25, (__int64 *)(a1 + 8), v20, 0x1Du, 0);
      sub_15F7200(v25);
    }
    if ( v22 != v24 )
      free(v22);
  }
  if ( ptr != v31 )
    free(ptr);
  if ( v27 != v28 )
    free(v27);
  if ( v7 )
    operator delete(v7);
  return v9;
}
