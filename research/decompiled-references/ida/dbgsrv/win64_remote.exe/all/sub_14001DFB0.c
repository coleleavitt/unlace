/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001DFB0
// Address: 0x000000014001DFB0

//----- (000000014001DFB0) ----------------------------------------------------
__int64 __fastcall sub_14001DFB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  DWORD CurrentProcessId; // r14d
  __int64 (__fastcall **v5)(__int64, _QWORD); // r12
  void *v6; // rax
  __int64 v7; // r15
  unsigned int v8; // ecx
  bool v9; // bl
  int v10; // eax
  size_t v11; // rbx
  size_t v12; // r13
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbx
  char *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r14
  char *v18; // rdi
  void *v19; // rcx
  void *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  unsigned int v23; // ebx
  DWORD v25; // [rsp+24h] [rbp-DCh]
  unsigned int v26; // [rsp+28h] [rbp-D8h]
  int v27; // [rsp+2Ch] [rbp-D4h]
  size_t v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+38h] [rbp-C8h]
  unsigned int v30; // [rsp+40h] [rbp-C0h] BYREF
  void *Src; // [rsp+48h] [rbp-B8h] BYREF
  size_t Size[2]; // [rsp+50h] [rbp-B0h]
  int v33; // [rsp+60h] [rbp-A0h]
  void *Block; // [rsp+68h] [rbp-98h]
  size_t v35[2]; // [rsp+70h] [rbp-90h]
  unsigned int v36; // [rsp+80h] [rbp-80h]
  void *v37; // [rsp+88h] [rbp-78h]
  __int128 v38; // [rsp+90h] [rbp-70h]
  int v39; // [rsp+A0h] [rbp-60h]
  void *v40; // [rsp+A8h] [rbp-58h]
  __int128 v41; // [rsp+B0h] [rbp-50h]
  __int64 v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall **v44)(__int64, _QWORD); // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  DWORD LastError; // [rsp+E0h] [rbp-20h]
  int v47; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int v48; // [rsp+F8h] [rbp-8h]
  char v49[260]; // [rsp+11Ch] [rbp+1Ch] BYREF

  v3 = a1;
  v43 = a1;
  CurrentProcessId = GetCurrentProcessId();
  v25 = CurrentProcessId;
  if ( *a2 )
  {
    sub_14001A450(a2, 0);
    j_free((void *)*a2);
    *a2 = 0;
    a2[2] = 0;
  }
  v5 = (__int64 (__fastcall **)(__int64, _QWORD))::Block;
  if ( !::Block )
  {
    v6 = operator new(0x40u);
    if ( v6 )
      v5 = (__int64 (__fastcall **)(__int64, _QWORD))sub_14001D1E0((__int64)v6);
    else
      v5 = nullptr;
    ::Block = v5;
  }
  v44 = v5;
  v7 = -1;
  v45 = -1;
  LastError = 0;
  if ( *((_BYTE *)v5 + 56) )
  {
    v7 = (*v5)(2, 0);
    v45 = v7;
    if ( v7 == -1 )
      LastError = GetLastError();
  }
  v47 = 304;
  if ( v7 != -1 && (unsigned int)((__int64 (__fastcall **)(__int64, int *))v5)[1](v7, &v47) )
  {
    v8 = v48;
    if ( v48 )
    {
LABEL_16:
      v9 = v7 != -1;
LABEL_17:
      if ( v8 != CurrentProcessId )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 640LL))(v3, v8);
        Src = nullptr;
        *(_OWORD *)Size = 0;
        Block = nullptr;
        *(_OWORD *)v35 = 0;
        v30 = v48;
        v33 = v10;
        sub_140061080((__int64)&Src, v49, 0, 0xFDE9u);
        sub_14001D7A0(v3, (__int64)&v30);
        v26 = v30;
        v36 = v30;
        v37 = nullptr;
        v38 = 0;
        v11 = Size[0];
        v28 = Size[0];
        if ( Size[0] )
        {
          v37 = sub_14005AAA0(Size[0]);
          *((_QWORD *)&v38 + 1) = v11;
          memcpy(v37, Src, v11);
          *(_QWORD *)&v38 = v11;
        }
        else
        {
          v28 = *((_QWORD *)&v38 + 1);
        }
        v27 = v33;
        v39 = v33;
        v40 = nullptr;
        v41 = 0;
        v12 = v35[0];
        if ( v35[0] )
        {
          v40 = sub_14005AAA0(v35[0]);
          *((_QWORD *)&v41 + 1) = v12;
          memcpy(v40, Block, v12);
          *(_QWORD *)&v41 = v12;
        }
        else
        {
          v12 = *((_QWORD *)&v41 + 1);
        }
        v13 = a2[1] + 1;
        v14 = a2[2];
        if ( v13 > v14 )
        {
          v15 = (char *)sub_14005ABE0((__int64)a2, nullptr, v13, 0x40u);
          v42 = (__int64)v15;
          v29 = a2[2];
          a2[2] = v14;
          v16 = *a2;
          v17 = a2[1] - 1;
          if ( v17 >= 0 )
          {
            v18 = v15 + 16;
            do
            {
              *((_DWORD *)v18 - 4) = *(_DWORD *)v16;
              *((_QWORD *)v18 - 1) = *(_QWORD *)(v16 + 8);
              *(_QWORD *)(v16 + 8) = 0;
              *(_QWORD *)v18 = *(_QWORD *)(v16 + 16);
              *(_QWORD *)(v16 + 16) = 0;
              *((_QWORD *)v18 + 1) = *(_QWORD *)(v16 + 24);
              *(_QWORD *)(v16 + 24) = 0;
              *((_DWORD *)v18 + 4) = *(_DWORD *)(v16 + 32);
              *((_QWORD *)v18 + 3) = *(_QWORD *)(v16 + 40);
              *(_QWORD *)(v16 + 40) = 0;
              *((_QWORD *)v18 + 4) = *(_QWORD *)(v16 + 48);
              *(_QWORD *)(v16 + 48) = 0;
              *((_QWORD *)v18 + 5) = *(_QWORD *)(v16 + 56);
              *(_QWORD *)(v16 + 56) = 0;
              v19 = *(void **)(v16 + 40);
              if ( v19 )
              {
                *(_QWORD *)(v16 + 48) = 0;
                j_free(v19);
                *(_QWORD *)(v16 + 40) = 0;
                *(_QWORD *)(v16 + 56) = 0;
              }
              v20 = *(void **)(v16 + 8);
              if ( v20 )
              {
                *(_QWORD *)(v16 + 16) = 0;
                j_free(v20);
                *(_QWORD *)(v16 + 8) = 0;
                *(_QWORD *)(v16 + 24) = 0;
              }
              v16 += 64;
              v18 += 64;
              --v17;
            }
            while ( v17 >= 0 );
          }
          j_free((void *)*a2);
          *a2 = v42;
          a2[2] = v29;
          CurrentProcessId = v25;
        }
        v21 = a2[1] << 6;
        v22 = *a2;
        *(_DWORD *)(v21 + v22) = v26;
        *(_QWORD *)(v21 + v22 + 8) = v37;
        *(_QWORD *)(v21 + v22 + 16) = v38;
        *(_QWORD *)(v21 + v22 + 24) = v28;
        *(_DWORD *)(v21 + v22 + 32) = v27;
        *(_QWORD *)(v21 + v22 + 40) = v40;
        *(_QWORD *)(v21 + v22 + 48) = v41;
        *(_QWORD *)(v21 + v22 + 56) = v12;
        ++a2[1];
        if ( Block )
        {
          v35[0] = 0;
          j_free(Block);
          Block = nullptr;
          v35[1] = 0;
        }
        if ( Src )
        {
          Size[0] = 0;
          j_free(Src);
        }
        v9 = v7 != -1;
        v3 = v43;
      }
      do
      {
        if ( !(unsigned int)((__int64 (__fastcall **)(__int64, int *))v5)[2](v7, &v47) )
          break;
        v8 = v48;
        if ( v48 )
          goto LABEL_17;
      }
      while ( v9 );
    }
    else
    {
      while ( (unsigned int)((__int64 (__fastcall **)(__int64, int *))v5)[2](v7, &v47) )
      {
        v8 = v48;
        if ( v48 )
          goto LABEL_16;
      }
    }
  }
  GetLastError();
  v23 = *((_DWORD *)a2 + 2);
  if ( *((_BYTE *)v5 + 56) && v7 != -1 )
    CloseHandle((HANDLE)v7);
  return v23;
}
// 14001E0E1: conditional instruction was optimized away because r15.8!=FFFFFFFFFFFFFFFF
