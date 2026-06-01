/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000380B0
// Address: 0x00000001000380B0

//----- (00000001000380B0) ----------------------------------------------------
__int64 __fastcall sub_1000380B0(unsigned __int8 **__p, unsigned __int8 *a2)
{
  bool v2; // zf
  int v3; // r12d
  __int64 v4; // r15
  unsigned int v5; // r15d
  int v6; // r14d
  __int64 v7; // rcx
  void *v8; // rax
  int v9; // eax
  int v10; // eax
  _QWORD v12[3]; // [rsp+8h] [rbp-C8h] BYREF
  char *v13; // [rsp+20h] [rbp-B0h] BYREF
  int v14; // [rsp+28h] [rbp-A8h]
  void *v15; // [rsp+50h] [rbp-80h] BYREF
  __int64 v16; // [rsp+58h] [rbp-78h]
  unsigned __int64 v17; // [rsp+60h] [rbp-70h]

  v2 = (*((_DWORD *)__p + 6))-- == 1;
  if ( v2 )
  {
    v3 = *((_DWORD *)__p + 7);
    if ( v3 )
    {
      do
      {
        while ( 1 )
        {
          v4 = sub_100033F10(v3);
          v3 = *(_DWORD *)(v4 + 24);
          if ( *(_DWORD *)(v4 + 64) == -1 )
            break;
          *((_DWORD *)__p + 6) += 32;
          sub_10003E3D0((__int64)v12, 0, 1);
          v5 = *(_DWORD *)(v4 + 64);
          v6 = v14;
          v7 = v16;
          v8 = v15;
          if ( v17 < v16 + 1 )
          {
            v8 = qvector_reserve((__int64)&v15, v15, v16 + 1, 4u);
            v15 = v8;
            v7 = v16;
          }
          *((_DWORD *)v8 + v7) = v6;
          ++v16;
          sub_10002E260(&v13, a2);
          sub_10003D3F0(v12, nullptr, nullptr, v5);
          sub_10003E5C0((__int64)v12);
          v9 = *((_DWORD *)__p + 6);
          v2 = v9 == 32;
          v10 = v9 - 32;
          *((_DWORD *)__p + 6) = v10;
          if ( !v2 || !v3 )
          {
            if ( v10 )
              return __stack_chk_guard;
            goto LABEL_11;
          }
        }
      }
      while ( v3 );
      if ( *((_DWORD *)__p + 6) )
        return __stack_chk_guard;
    }
LABEL_11:
    sub_100036070((__int64)__p, __p[1]);
    operator delete(__p);
  }
  return __stack_chk_guard;
}
