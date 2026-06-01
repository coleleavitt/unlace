__int64 __fastcall sub_818600(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v3; // rsi
  __int64 *v4; // rdx
  int v5; // ecx
  _QWORD *v6; // r8
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rcx
  __int64 *v12; // r9
  __int64 v13; // rsi
  __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  _DWORD *v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // rcx
  unsigned int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 *v35; // rdx
  _QWORD *v36; // rdx
  __int64 v37; // rdx
  __int64 *v38; // rdx
  __int64 v39; // rdx

  result = a1[12] + 56 * a2;
  if ( !*(_DWORD *)result )
  {
    if ( a1[1] == 1 )
    {
      v37 = *(_QWORD *)(result + 40);
      *(_QWORD *)(result + 24) = 0;
      if ( *(_DWORD *)v37 == 1 )
      {
        v38 = *(__int64 **)(v37 + 48);
      }
      else
      {
        v38 = (__int64 *)a1[9];
        a1[9] = *v38;
        *v38 = result;
      }
      *(_QWORD *)(result + 48) = v38;
      a1[11] = 0;
    }
    else
    {
      v21 = a1[14];
      v22 = a1[11];
      a1[14] = v21 + 56;
      *(_QWORD *)(v21 + 8) = *(_QWORD *)(v22 + 8);
      v23 = *(_QWORD *)(v22 + 40);
      *(_DWORD *)v21 = 0;
      *(_QWORD *)(v21 + 40) = v23;
      *(__m128i *)(v21 + 24) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)result);
      if ( a1[11] == a1[13] )
      {
        v35 = (__int64 *)a1[9];
        a1[13] = v21;
        a1[9] = *v35;
        *v35 = result;
        *(_QWORD *)(result + 48) = v35;
        v36 = (_QWORD *)a1[9];
        a1[9] = *v36;
        *v36 = v21;
        *(_QWORD *)(v21 + 48) = v36;
      }
      else
      {
        *(_QWORD *)(v23 + 32) = v21;
        v24 = *(_QWORD *)(v22 + 8);
        if ( v22 == *(_QWORD *)(v24 + 24) )
          *(_QWORD *)(v24 + 24) = v21;
        else
          *(_QWORD *)(v24 + 16) = v21;
        v25 = *(_QWORD *)(v21 + 40);
        if ( *(_DWORD *)v25 == 1 )
        {
          v26 = *(_QWORD **)(v25 + 48);
        }
        else
        {
          v26 = (_QWORD *)a1[9];
          a1[9] = *v26;
          *v26 = v21;
        }
        *(_QWORD *)(v21 + 48) = v26;
        *(_QWORD *)(result + 48) = v26;
      }
      v27 = a1[1];
      if ( v27 != 1 )
      {
        v28 = v27 - 1;
        v29 = 0;
        a1[1] = v28;
        v30 = v28;
        if ( (unsigned int)v28 <= 1 )
        {
          a1[2] = 0;
          v31 = 1;
        }
        else
        {
          do
          {
            v30 >>= 1;
            ++v29;
          }
          while ( v30 != 1 );
          a1[2] = v29;
          v31 = (unsigned int)(1 << v29);
        }
        a1[3] = v28 - v31;
        v32 = *(_QWORD *)(result + 16);
        if ( v32 )
        {
          v33 = *(_QWORD *)(result + 24);
          if ( v33 )
          {
            *(_QWORD *)(v33 + 16) = v32;
            *(_QWORD *)(v32 + 24) = *(_QWORD *)(result + 24);
          }
          else
          {
            *(_QWORD *)(v32 + 24) = 0;
          }
        }
        else
        {
          v39 = *(_QWORD *)(a1[11] + 24LL);
          a1[11] = v39;
          *(_QWORD *)(v39 + 16) = 0;
        }
      }
      *(_QWORD *)(v21 + 16) = a1[11];
      *(_QWORD *)(result + 40) = v21;
      v34 = a1[11];
      *(_QWORD *)(result + 8) = v21;
      *(_QWORD *)(result + 32) = v34;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(a1[11] + 8LL) = v21;
      *(_QWORD *)(a1[11] + 40LL) = result;
    }
  }
  v3 = (_DWORD *)a1[13];
  if ( (_DWORD *)result != v3 )
  {
    while ( 1 )
    {
      v6 = *(_QWORD **)(result + 48);
      v7 = (_QWORD *)*v6;
      if ( *v6 != result )
      {
        v3 = *(_DWORD **)(result + 8);
        if ( v7 != (_QWORD *)v3 )
        {
          v5 = *(_DWORD *)result;
          if ( !*(_DWORD *)result )
            goto LABEL_10;
          *(_QWORD *)(v7[5] + 32LL) = result;
          v8 = *(_QWORD *)(result + 32);
          if ( v8 )
            *(_QWORD *)(v8 + 40) = v7;
          v9 = *(_QWORD **)(result + 40);
          *(_QWORD *)(result + 40) = v7[5];
          if ( v7 == v9 )
            v9 = (_QWORD *)result;
          else
            v9[4] = v7;
          v7[5] = v9;
          v10 = (_QWORD *)v7[4];
          v7[4] = *(_QWORD *)(result + 32);
          if ( v10 == (_QWORD *)result )
            v10 = v7;
          else
            v10[5] = result;
          *(_QWORD *)(result + 32) = v10;
          v11 = *(_QWORD *)(result + 8);
          v12 = (__int64 *)(v11 + 16);
          if ( *(_QWORD *)(v11 + 24) == result )
            v12 = (__int64 *)(v11 + 24);
          v13 = v7[1];
          v14 = (__int64 *)(v13 + 16);
          if ( v7 == *(_QWORD **)(v13 + 24) )
            v14 = (__int64 *)(v13 + 24);
          *(_QWORD *)(result + 8) = v13;
          v7[1] = v11;
          v15 = *v12;
          *v12 = *v14;
          *v14 = v15;
          **(_QWORD **)(result + 48) = result;
          v6 = *(_QWORD **)(result + 48);
        }
      }
      v5 = *(_DWORD *)result;
      v16 = *(_QWORD *)(result + 40);
      v17 = *(_QWORD *)(result + 32);
      if ( !*(_DWORD *)result )
        goto LABEL_9;
      if ( v17 == *(_QWORD *)(result + 24) )
      {
        v18 = *(_DWORD **)(result + 16);
        if ( v18 )
        {
          if ( !*v18 )
            break;
        }
      }
      if ( v17 == a1[11] )
        goto LABEL_9;
      if ( *(_QWORD **)(v17 + 48) == v6 )
      {
        *v6 = v17;
      }
      else
      {
        *v6 = a1[9];
        a1[9] = v6;
      }
      if ( *(_DWORD *)result != *(_DWORD *)v16 - 1 || v16 == a1[13] )
      {
        v4 = (__int64 *)a1[9];
        a1[9] = *v4;
        *v4 = result;
        v5 = *(_DWORD *)result;
        *(_QWORD *)(result + 48) = v4;
        goto LABEL_9;
      }
      v20 = *(_QWORD *)(v16 + 48);
      v3 = *(_DWORD **)(result + 8);
      ++*(_DWORD *)result;
      *(_QWORD *)(result + 48) = v20;
      if ( (_DWORD *)a1[13] == v3 )
        goto LABEL_35;
LABEL_11:
      result = (__int64)v3;
    }
    if ( v5 != *(_DWORD *)v16 - 1 || v16 == a1[13] )
    {
LABEL_9:
      v3 = *(_DWORD **)(result + 8);
    }
    else
    {
      *v6 = a1[9];
      a1[9] = v6;
      v19 = *(_QWORD *)(v16 + 48);
      *(_QWORD *)(result + 48) = v19;
      *(_QWORD *)(v17 + 48) = v19;
      v5 = *(_DWORD *)result;
      v3 = *(_DWORD **)(result + 8);
    }
LABEL_10:
    *(_DWORD *)result = v5 + 1;
    if ( (_DWORD *)a1[13] == v3 )
      goto LABEL_35;
    goto LABEL_11;
  }
LABEL_35:
  ++*v3;
  return result;
}
