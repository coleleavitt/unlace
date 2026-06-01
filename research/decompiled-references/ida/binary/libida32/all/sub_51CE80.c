__int64 __fastcall sub_51CE80(__int64 a1, int a2, _BYTE **a3, __int64 a4, __int64 a5)
{
  _QWORD *v5; // rbp
  _BYTE *v6; // rax
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // r14
  __int64 v12; // rbx
  void *v13; // rdi
  void *v14; // rdi
  char v15; // al
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  int v19; // r12d
  int v20; // ebx
  __int64 v21; // rbp
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // r15
  char v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rax
  int v28; // ebx
  __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v35; // [rsp+14h] [rbp-74h]
  unsigned int v36; // [rsp+18h] [rbp-70h]
  int v37; // [rsp+1Ch] [rbp-6Ch]
  __int64 v38; // [rsp+20h] [rbp-68h]
  _QWORD *v39; // [rsp+28h] [rbp-60h]
  unsigned int v40; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v41; // [rsp+3Ch] [rbp-4Ch] BYREF
  _QWORD v42[9]; // [rsp+40h] [rbp-48h] BYREF

  v5 = a3;
  v37 = a2;
  v42[1] = __readfsqword(0x28u);
  v6 = *a3;
  v42[0] = *a3 + 1;
  LOBYTE(v6) = *v6;
  *(_BYTE *)(a1 + 52) = (_BYTE)v6;
  if ( (char)v6 >= 0 )
    return 0;
  v8 = a1;
  v9 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 )
  {
    do
    {
      v12 = v9 + *(_QWORD *)v8;
      v13 = *(void **)(v12 + 24);
      if ( v13 )
      {
        *(_QWORD *)(v12 + 32) = 0;
        qfree(v13);
      }
      v14 = *(void **)v12;
      if ( *(_QWORD *)v12 )
      {
        *(_QWORD *)(v12 + 8) = 0;
        qfree(v14);
      }
      ++v10;
      v9 += 56;
    }
    while ( v11 != v10 );
  }
  *(_QWORD *)(v8 + 8) = 0;
  if ( *(_QWORD *)(v8 + 16) < (unsigned __int64)a2 )
    *(_QWORD *)v8 = qvector_reserve(v8, *(_QWORD *)v8, a2, 56);
  v15 = *(_BYTE *)(v8 + 52);
  *(_QWORD *)(v8 + 32) = 0;
  v16 = v15 & 7;
  if ( v16 )
    v17 = 1 << (v16 - 1);
  else
    v17 = (unsigned __int8)getinf(61);
  v38 = -1;
  v18 = 8 * v17;
  if ( v18 <= 63 )
    v38 = (1LL << v18) - 1;
  v19 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    v36 = 0;
    v20 = 0;
    v35 = 0;
    v39 = v5;
    v21 = v8;
    while ( 1 )
    {
      v22 = *(_QWORD *)(v21 + 8);
      v23 = *(_QWORD *)v21;
      if ( *(_QWORD *)(v21 + 16) < (unsigned __int64)(v22 + 1) )
      {
        v31 = qvector_reserve(v21, v23, v22 + 1, 56);
        v22 = *(_QWORD *)(v21 + 8);
        *(_QWORD *)v21 = v31;
        v23 = v31;
      }
      v24 = v23 + 56 * v22;
      *(_QWORD *)v24 = 0;
      *(_QWORD *)(v24 + 24) = 0;
      *(_OWORD *)(v24 + 8) = 0;
      *(_OWORD *)(v24 + 32) = 0;
      ++*(_QWORD *)(v21 + 8);
      if ( a4 )
      {
        if ( !(unsigned __int8)sub_54DE00(v24, a4) )
          return 0;
      }
      if ( a5 && !(unsigned __int8)sub_54DE00(v24 + 24, a5) )
        return 0;
      if ( v20 )
      {
        --v20;
        v25 = 0;
      }
      else
      {
        v25 = 0;
        if ( (*(_BYTE *)(v21 + 52) & 0x10) != 0 )
        {
          v28 = sub_692FE0(v42);
          if ( v28 <= 0 )
            return 0;
          v29 = *(_QWORD *)(v21 + 32);
          v30 = *(_QWORD *)(v21 + 24);
          if ( *(_QWORD *)(v21 + 40) < (unsigned __int64)(v29 + 1) )
          {
            v32 = qvector_reserve(v21 + 24, v30, v29 + 1, 4);
            *(_QWORD *)(v21 + 24) = v32;
            v30 = v32;
            v29 = *(_QWORD *)(v21 + 32);
          }
          *(_DWORD *)(v30 + 4 * v29) = v28;
          v25 = 1;
          v20 = v28 - 1;
          ++*(_QWORD *)(v21 + 32);
        }
      }
      v41 = 0;
      if ( !(unsigned __int8)sub_693030(v42, &v40)
        || (*(_BYTE *)(v21 + 48) & 0x20) != 0 && !(unsigned __int8)sub_693030(v42, &v41) )
      {
        return 0;
      }
      v26 = v40;
      v27 = v41;
      if ( !v25 )
      {
        v36 += v41;
        v35 += v40;
        v26 = v35;
        v27 = v36;
      }
      *(_QWORD *)(v24 + 48) = v38 & (v26 | (v27 << 32));
      if ( v20 )
      {
        v19 = v37 - 1;
      }
      else
      {
        if ( !v19 )
        {
          v8 = v21;
          v5 = v39;
          break;
        }
        v37 = v19--;
      }
    }
  }
  sub_51A3C0(v8);
  *v5 = v42[0];
  return 1;
}

