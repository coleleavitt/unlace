__int64 __fastcall sub_8B3180(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  _DWORD *v7; // rbx
  __int64 result; // rax
  __int64 v10; // r13
  int v11; // edi
  __int64 v12; // rdx
  unsigned int *v13; // rcx
  unsigned int v14; // esi
  int *v15; // rbp
  __int64 v16; // [rsp+10h] [rbp-98h]
  _QWORD *v17; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v18[4]; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v19[12]; // [rsp+48h] [rbp-60h] BYREF

  v3 = a1[199];
  v4 = v3 + 232LL * a2;
  if ( (*(_BYTE *)(v4 + 3) & 0x20) != 0 )
  {
    LODWORD(v5) = *(_DWORD *)v4 & 0x1FFFFFFF;
    v6 = 4LL * (unsigned int)v5;
LABEL_3:
    v7 = (_DWORD *)(a1[200] + v6);
    *(_BYTE *)(v3 + 232LL * (unsigned int)*v7 + 3) &= 0x1Fu;
    *v7 = -1;
    return sub_8A8D40((__int64)(a1 + 184), v5);
  }
  v10 = a1[187] + 24LL * a2;
  v11 = *(_DWORD *)(v10 + 16);
  v12 = *(_QWORD *)v10;
  result = (unsigned int)(v11 + 1);
  *(_DWORD *)(v10 + 16) = result;
  if ( v12 )
  {
    for ( result = 0; result != *(_DWORD *)(v12 - 4) && *(_DWORD *)(v12 + 8 * result) == -1; ++result )
      ;
    *(_DWORD *)(v10 + 16) = v11 + 2;
    if ( *(_DWORD *)(v12 - 4) != (_DWORD)result )
    {
      v13 = (unsigned int *)(v12 + 8 * result);
      v5 = *v13;
      v6 = 4 * v5;
      v16 = *(_QWORD *)(a1[185] + 16 * v5) + 40LL * v13[1];
      v14 = *(_DWORD *)(a1[200] + 4 * v5);
      v18[0] = 0;
      v17 = a1 + 92;
      v18[1] = 0;
      v18[2] = 1;
      v18[3] = 0;
      v19[0] = 0;
      v15 = (int *)(232LL * v14 + v3);
      v19[1] = 0;
      v19[2] = 1;
      v19[3] = 0;
      if ( sub_8AF050((__int64)a1, v14) )
      {
        sub_8ADE80((__int64)v17, (__int64)v18, v15 + 18);
        sub_8ADE80((__int64)v17, (__int64)v19, v15 + 26);
      }
      else if ( sub_8AEF90((__int64)a1, v14) )
      {
        sub_8948B0((__int64 *)&v17, v15 + 34);
      }
      else
      {
        sub_8948B0((__int64 *)&v17, v15 + 2);
      }
      sub_8B2E60(a1, v14, a2, v16, (__int64)v18);
      sub_8AD4E0((__int64)v17, (__int64)v18);
      *(_DWORD *)(v10 + 16) -= 2;
      v3 = a1[199];
      goto LABEL_3;
    }
  }
  *(_DWORD *)(v10 + 16) = v11;
  return result;
}

