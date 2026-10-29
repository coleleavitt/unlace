/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C6D0
// Address: 0x0040C6D0

//----- (0040C6D0) --------------------------------------------------------
int __thiscall sub_40C6D0(_DWORD *this, const __m128i *a2, int a3)
{
  __m128i v3; // xmm0
  __int32 v4; // eax
  __int32 v5; // esi
  int v6; // edi
  char *v7; // eax
  unsigned int *v8; // ecx
  _DWORD *v9; // ebx
  unsigned int v10; // eax
  _DWORD *v11; // esi
  _DWORD *v12; // eax
  int v13; // ecx
  void *v14; // eax
  int v16[3]; // [esp+10h] [ebp-48h] BYREF
  __int64 v17; // [esp+1Ch] [ebp-3Ch]
  __int32 v18; // [esp+24h] [ebp-34h]
  _DWORD *v19; // [esp+28h] [ebp-30h]
  int v20; // [esp+2Ch] [ebp-2Ch]
  int v21; // [esp+30h] [ebp-28h]
  int v22; // [esp+34h] [ebp-24h]
  int v23; // [esp+38h] [ebp-20h]
  int v24; // [esp+3Ch] [ebp-1Ch]
  int v25; // [esp+40h] [ebp-18h]
  int v26; // [esp+44h] [ebp-14h]
  int v27; // [esp+48h] [ebp-10h]
  int v28; // [esp+54h] [ebp-4h]
  int v29; // [esp+58h] [ebp+0h]
  __int64 v30; // [esp+5Ch] [ebp+4h]
  __int32 v31; // [esp+64h] [ebp+Ch]
  _DWORD *v32; // [esp+68h] [ebp+10h]
  int v33; // [esp+6Ch] [ebp+14h]
  int v34; // [esp+70h] [ebp+18h]
  int v35; // [esp+74h] [ebp+1Ch]
  int v36; // [esp+78h] [ebp+20h]
  int v37; // [esp+7Ch] [ebp+24h]
  int v38; // [esp+80h] [ebp+28h]
  int v39; // [esp+84h] [ebp+2Ch]
  int v40; // [esp+88h] [ebp+30h]
  _BYTE v41[12]; // [esp+8Ch] [ebp+34h]
  _DWORD *v42; // [esp+98h] [ebp+40h]
  _DWORD *v43; // [esp+9Ch] [ebp+44h]
  _DWORD *v44; // [esp+A0h] [ebp+48h]

  v42 = this;
  v19 = this;
  v20 = a3;
  v3 = _mm_loadl_epi64(a2);
  v4 = a2->m128i_i32[2];
  v17 = v3.m128i_i64[0];
  v18 = v4;
  v21 = 0;
  v22 = -1;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v5 = a2->m128i_i32[2];
  v28 = 0;
  v29 = a3;
  *(_QWORD *)&v41[4] = _mm_move_epi64(v3).m128i_u64[0];
  v30 = *(_QWORD *)&v41[4];
  v31 = v5;
  v32 = this;
  v33 = a3;
  v34 = 0;
  v35 = -1;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v6 = *(this + 151);
  v43 = this + 151;
  v7 = (char *)sub_4627C2(0x44u);
  v3.m128i_i64[0] = *(_QWORD *)&v41[4];
  *((_DWORD *)v7 + 4) = a3;
  *(_QWORD *)(v7 + 20) = v3.m128i_i64[0];
  v8 = (unsigned int *)(v7 + 16);
  v44 = v7;
  *((_DWORD *)v7 + 9) = a3;
  v9 = v44;
  v10 = (unsigned int)v42;
  v8[3] = v5;
  v8[4] = v10;
  v8[6] = 0;
  v8[7] = -1;
  v8[8] = 0;
  v8[9] = 0;
  v8[10] = 0;
  v8[11] = 0;
  v8[12] = 0;
  *v9 = v6;
  v9[1] = v6;
  v9[2] = v6;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  *((_WORD *)v9 + 6) = 0;
  LOBYTE(v28) = 3;
  v11 = (_DWORD *)(v10 + 604);
  v12 = sub_408C10((int *)(v10 + 604), v16, v8);
  v13 = v12[2];
  *(_QWORD *)v41 = *(_QWORD *)v12;
  if ( *(_BYTE *)(v13 + 13) || v9[4] < *(_DWORD *)(v13 + 16) )
  {
    if ( v11[1] == 63161283 )
      sub_403E20();
    return sub_403C10(v11, *(_DWORD **)v41, *(int *)&v41[4], (int)v9);
  }
  else
  {
    v14 = (void *)v9[14];
    LOBYTE(v28) = 4;
    if ( v14 )
    {
      v9[15] = 0;
      sub_453A20(v14);
      v9[14] = 0;
      v9[16] = 0;
    }
    return sub_4627F2(v9);
  }
}
