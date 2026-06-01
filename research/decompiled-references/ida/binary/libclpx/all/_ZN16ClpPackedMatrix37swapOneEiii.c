__int64 __fastcall ClpPackedMatrix3::swapOne(ClpPackedMatrix3 *this, int a2, int a3, int a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  int *v6; // r8
  __int64 v7; // rbx
  int v8; // esi
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rbx
  __int64 v12; // r8
  int *v13; // r10
  int *v14; // r11
  __int64 v15; // r8
  __int64 v16; // rdi
  int v17; // esi
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // r11
  __int64 v22; // rdi
  int *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  int v26; // ebp
  __int64 v27; // rbx
  __int64 v28; // xmm1_8
  __int64 v29; // xmm0_8

  v4 = *((_QWORD *)this + 4);
  v5 = v4 + 4LL * *((int *)this + 4);
  v6 = (int *)(*((_QWORD *)this + 9) + 40LL * a2);
  v7 = *v6;
  v8 = v6[8];
  v9 = *((_QWORD *)this + 6) + 4 * v7;
  result = *((_QWORD *)this + 7);
  v11 = 8 * v7;
  v12 = v4 + 4LL * v6[2];
  v13 = (int *)(v12 + 4LL * a4);
  v14 = (int *)(v12 + 4LL * a3);
  v15 = *v13;
  v16 = *v14;
  *v14 = v15;
  *(_DWORD *)(v5 + 4 * v15) = a3;
  *v13 = v16;
  *(_DWORD *)(v5 + 4 * v16) = a4;
  LODWORD(v16) = (a3 & 0xFFFFFFFC) * v8;
  LODWORD(v15) = v8;
  v17 = 4 * v8;
  LODWORD(v5) = v16 + a3 - (a3 & 0xFFFFFFFC);
  v18 = 8LL * (int)v5;
  v19 = 4LL * (int)v5;
  v20 = (int)((a4 & 0xFFFFFFFC) * v15 + a4 - (a4 & 0xFFFFFFFC));
  v21 = 8 * v20;
  v22 = v20;
  if ( v17 > 0 )
  {
    v23 = (int *)(v9 + v19);
    result += v21 + v11;
    v24 = v9 + v19 + 16;
    v25 = v24 + 16LL * ((unsigned int)(v17 - 1) >> 2);
    while ( 1 )
    {
      v26 = *v23;
      v27 = result - v21;
      result += 32;
      v28 = *(_QWORD *)(result - 32);
      v29 = *(_QWORD *)(v27 + v18);
      *v23 = v23[v19 / 0xFFFFFFFFFFFFFFFCLL + v22];
      *(_QWORD *)(v27 + v18) = v28;
      v23[v19 / 0xFFFFFFFFFFFFFFFCLL + v22] = v26;
      *(_QWORD *)(result - 32) = v29;
      v23 = (int *)v24;
      if ( v25 == v24 )
        break;
      v24 += 16;
    }
  }
  return result;
}

