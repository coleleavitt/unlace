__int64 __fastcall sub_1D05010(__int64 a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned int v7; // r12d
  unsigned __int64 v8; // rax
  int v9; // ecx
  void *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v14; // [rsp+0h] [rbp-48h] BYREF
  __int64 v15; // [rsp+8h] [rbp-40h]
  __int64 v16; // [rsp+10h] [rbp-38h]
  unsigned int v17; // [rsp+18h] [rbp-30h]
  int v18; // [rsp+20h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-20h]

  v6 = *a2;
  if ( !(_DWORD)v6 || !a2[1] || (v7 = 1, *((_QWORD *)a2 + 1)) )
  {
    v7 = 1;
    v8 = sub_15AB9E0((__int64)a2, *(_QWORD **)(a1 + 248), v6, a4, a5, a6);
    v9 = *a2;
    v14 = a1;
    v18 = v9;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v19 = 0;
    v11 = sub_1CFE3D0((__int64)&v14, v8, v10, 0, 0);
    if ( v11 )
    {
      v7 = 0;
      sub_15AB8B0((__int64)a2, v11, v12);
    }
    operator delete(v15, 16LL * v17, 8);
  }
  return v7;
}
