void __fastcall sub_12E89A0(__int64 a1)
{
  _QWORD *v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rdx
  char v8; // cl
  _BYTE *v9; // r8
  _BYTE *v10; // r9
  size_t v11; // r10
  __int64 v12; // r15
  void **v13; // r12
  void **v14; // rbx
  _BYTE *v15; // [rsp+8h] [rbp-70h]
  _BYTE *v16; // [rsp+10h] [rbp-68h]
  size_t v17; // [rsp+18h] [rbp-60h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v19; // [rsp+28h] [rbp-50h]
  unsigned int v20; // [rsp+2Ch] [rbp-4Ch]
  _QWORD v21[9]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 16);
  v3 = &v2[4 * *(unsigned int *)(a1 + 24)];
  if ( v3 != v2 )
  {
    do
    {
      while ( 1 )
      {
        v4 = sub_14075F0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 104LL) + 632LL, *v2, v2[1]);
        if ( v4 )
        {
          v5 = v21;
          *(_BYTE *)(v4 + 904) |= 2u;
          v21[0] = v4;
          LODWORD(v4) = 1;
          ptr = v21;
          v20 = 2;
          do
          {
            v6 = (unsigned int)v4;
            v4 = (unsigned int)(v4 - 1);
            v7 = v5[v6 - 1];
            v19 = v4;
            v8 = *(_BYTE *)(v7 + 904);
            if ( (v8 & 1) == 0 )
            {
              v9 = *(_BYTE **)(v7 + 264);
              v10 = *(_BYTE **)(v7 + 256);
              *(_BYTE *)(v7 + 904) = v8 | 4;
              v11 = v9 - v10;
              v12 = (v9 - v10) >> 3;
              if ( v4 + v12 > (unsigned __int64)v20 )
              {
                v17 = v9 - v10;
                v16 = v10;
                v15 = v9;
                sub_2237220(&ptr, v21, v4 + v12, 8);
                v5 = ptr;
                v4 = v19;
                v11 = v17;
                v10 = v16;
                v9 = v15;
              }
              if ( v9 != v10 )
              {
                memmove(&v5[v4], v10, v11);
                LODWORD(v4) = v19;
                v5 = ptr;
              }
              v19 = v4 + v12;
              LODWORD(v4) = v4 + v12;
            }
          }
          while ( (_DWORD)v4 );
          if ( v5 != v21 )
            break;
        }
        v2 += 4;
        if ( v3 == v2 )
          goto LABEL_15;
      }
      free(v5);
      v2 += 4;
    }
    while ( v3 != v2 );
LABEL_15:
    v13 = *(void ***)(a1 + 16);
    v14 = &v13[4 * *(unsigned int *)(a1 + 24)];
    while ( v13 != v14 )
    {
      while ( 1 )
      {
        v14 -= 4;
        if ( *v14 == v14 + 2 )
          break;
        operator delete(*v14);
        if ( v13 == v14 )
          goto LABEL_19;
      }
    }
  }
LABEL_19:
  *(_DWORD *)(a1 + 24) = 0;
}
