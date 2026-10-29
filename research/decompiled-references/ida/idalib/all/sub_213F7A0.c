__int64 __fastcall sub_213F7A0(__int64 a1, __m128 *a2, char a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  _BYTE *v8; // r15
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rax
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r13
  _BYTE *v16; // rcx
  __int64 v17; // rax
  _BYTE *v19; // [rsp+8h] [rbp-70h]
  int v20; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *v21[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v22[72]; // [rsp+30h] [rbp-48h] BYREF

  sub_2132C70(a1, a2);
  v5 = sub_2153C00(a1);
  if ( *(_DWORD *)(v5 + 32) <= 0x40u )
    v6 = *(_QWORD *)(v5 + 24);
  else
    v6 = **(_QWORD **)(v5 + 24);
  sub_2132C70(a1, a2);
  v7 = sub_2153C00(a1);
  v8 = *(_BYTE **)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  sub_2132C70(a1, a2);
  if ( a3 )
  {
    if ( v9 )
    {
      v10 = v9 - 2;
      if ( v10 <= --v9 )
        v9 = v10;
      ++v8;
    }
    v11 = *(_DWORD *)(a1 + 296);
    v12 = *(_BYTE *)(a1 + 512) == 0;
    *(_QWORD *)(a1 + 496) = a2;
    *(_QWORD *)(a1 + 472) = v8;
    *(_QWORD *)(a1 + 480) = v9;
    *(_QWORD *)(a1 + 488) = v6;
    *(_DWORD *)(a1 + 504) = v11;
    if ( v12 )
    {
      v13 = *(_QWORD *)(a1 + 16);
      *(_BYTE *)(a1 + 512) = 1;
      if ( *(_BYTE *)(v13 + 1777) )
      {
        if ( !*(_DWORD *)(v13 + 1780) )
        {
          v14 = *(_QWORD *)(v13 + 1728);
          v15 = *(_QWORD *)(v13 + 1520);
          v20 = 0;
          v16 = *(_BYTE **)(v13 + 1512);
          if ( v14 )
          {
            while ( *(_QWORD *)(v14 + 16) )
              v14 = *(_QWORD *)(v14 + 16);
            if ( v14 != v13 + 1720 && !*(_DWORD *)(v14 + 32) )
              goto LABEL_18;
          }
          else
          {
            v14 = v13 + 1720;
          }
          v19 = *(_BYTE **)(v13 + 1512);
          v21[0] = &v20;
          v17 = sub_2130A30((_QWORD *)(v13 + 1712), v14, (_DWORD **)v21);
          v16 = v19;
          v14 = v17;
LABEL_18:
          v21[0] = v22;
          sub_21297E0(v21, v16, (__int64)&v16[v15]);
          sub_A0AAD0(v14 + 440, v21);
          if ( v21[0] != v22 )
            operator delete(v21[0]);
          v21[0] = v22;
          sub_21297E0(v21, v8, (__int64)&v8[v9]);
          sub_A0AAD0(v14 + 472, v21);
          if ( v21[0] != v22 )
            operator delete(v21[0]);
          *(_DWORD *)(v14 + 504) = 0;
          *(_BYTE *)(v14 + 524) = 0;
          *(_BYTE *)(v14 + 544) = 0;
          *(_BYTE *)(v14 + 553) = 0;
        }
      }
    }
  }
  return 0;
}
