__int64 __fastcall sub_1EAEC10(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int64 v7; // r8
  int v8; // r15d
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // r10
  _BYTE *v13; // rcx
  unsigned __int64 v15; // [rsp+8h] [rbp-80h]
  __int64 v16; // [rsp+10h] [rbp-78h]
  __int64 v17; // [rsp+18h] [rbp-70h]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+28h] [rbp-60h]
  _BYTE v20[88]; // [rsp+30h] [rbp-58h] BYREF

  v3 = *(unsigned int *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 32);
  v5 = *(_QWORD *)(v4 + 8 * v3);
  v6 = (unsigned int)(v3 + 1);
  *(_DWORD *)(a2 + 24) = v6;
  ptr = v20;
  v19 = 0x400000000LL;
  v7 = ((unsigned __int64)(unsigned int)v5 + 63) >> 6;
  if ( v7 )
  {
    v8 = ((unsigned __int64)(unsigned int)v5 + 63) >> 6;
    v9 = 4;
    v10 = 0;
    v11 = 0;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v4 + 8 * v6);
      *(_DWORD *)(a2 + 24) = v6 + 1;
      if ( v10 + 1 <= v9 )
      {
        ++v11;
        *((_QWORD *)ptr + v10) = v12;
        v10 = (unsigned int)(v19 + 1);
        LODWORD(v19) = v19 + 1;
        if ( v11 == v8 )
          goto LABEL_7;
      }
      else
      {
        v17 = v12;
        v16 = v5;
        ++v11;
        v15 = v7;
        sub_2237220(&ptr, v20, v10 + 1, 8);
        v7 = v15;
        v5 = v16;
        *((_QWORD *)ptr + (unsigned int)v19) = v17;
        v10 = (unsigned int)(v19 + 1);
        LODWORD(v19) = v19 + 1;
        if ( v8 == v11 )
        {
LABEL_7:
          v13 = ptr;
          goto LABEL_8;
        }
      }
      v6 = *(unsigned int *)(a2 + 24);
      v4 = *(_QWORD *)(a2 + 32);
      v9 = HIDWORD(v19);
    }
  }
  v13 = v20;
LABEL_8:
  sub_2205610(a1, (unsigned int)v5, (unsigned int)v7, v13);
  if ( ptr != v20 )
    free(ptr);
  return a1;
}
