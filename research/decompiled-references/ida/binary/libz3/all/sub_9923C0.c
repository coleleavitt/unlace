__int64 __fastcall sub_9923C0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 result; // rax
  __int64 v7; // r11
  __int64 v8; // r8
  __int64 *v9; // rcx
  _QWORD *v10; // rdx
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r11
  __int64 v19; // r8
  __int64 *v20; // rcx
  __int64 *v21; // rdx
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 *v24; // rcx
  __int64 *v25; // rdx
  __int64 *v26; // rdx
  unsigned int v27; // esi
  unsigned int v28; // r8d
  __int64 v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 *v39; // rsi
  __int64 v40; // rdi

  result = a3;
  if ( a4 > a5 )
  {
    v18 = a3 - (_QWORD)a2;
    v19 = (a3 - (__int64)a2) >> 4;
    if ( a3 - (__int64)a2 > 0 )
    {
      v20 = a6;
      v21 = a2;
      do
      {
        v22 = *v21;
        v20 += 2;
        v21 += 2;
        *(v20 - 2) = v22;
        *((_DWORD *)v20 - 2) = *((_DWORD *)v21 - 2);
        --v19;
      }
      while ( v19 );
      v23 = v18 - 16;
      if ( !v18 )
        v23 = 0;
      v24 = (__int64 *)((char *)a6 + v23);
      v25 = v24 + 2;
      if ( a2 == (__int64 *)a1 )
      {
        v36 = (char *)v25 - (char *)a6;
        v37 = ((char *)v25 - (char *)a6) >> 4;
        if ( v36 > 0 )
        {
          v38 = (__int64)v24 - result;
          do
          {
            v39 = (__int64 *)(result + v38);
            result -= 16;
            v40 = *v39;
            LODWORD(v39) = *((_DWORD *)v39 + 2);
            *(_QWORD *)result = v40;
            *(_DWORD *)(result + 8) = (_DWORD)v39;
            --v37;
          }
          while ( v37 );
        }
      }
      else if ( a6 != v25 )
      {
        v26 = a2 - 2;
        while ( 1 )
        {
          v27 = *((_DWORD *)v24 + 2);
          v28 = *((_DWORD *)v26 + 2);
          result -= 16;
          if ( v28 < v27 )
            break;
LABEL_26:
          v30 = *v24;
          *(_DWORD *)(result + 8) = v27;
          *(_QWORD *)result = v30;
          if ( a6 == v24 )
            return result;
          v24 -= 2;
        }
        while ( 1 )
        {
          v29 = *v26;
          *(_DWORD *)(result + 8) = v28;
          *(_QWORD *)result = v29;
          if ( (__int64 *)a1 == v26 )
            break;
          v27 = *((_DWORD *)v24 + 2);
          v28 = *((_DWORD *)v26 - 2);
          v26 -= 2;
          result -= 16;
          if ( v28 >= v27 )
            goto LABEL_26;
        }
        v33 = v24 + 2;
        v34 = ((char *)v33 - (char *)a6) >> 4;
        if ( (char *)v33 - (char *)a6 > 0 )
        {
          do
          {
            v35 = *(v33 - 2);
            v33 -= 2;
            result -= 16;
            *(_QWORD *)result = v35;
            *(_DWORD *)(result + 8) = *((_DWORD *)v33 + 2);
            --v34;
          }
          while ( v34 );
        }
      }
    }
  }
  else
  {
    v7 = (__int64)a2 - a1;
    v8 = ((__int64)a2 - a1) >> 4;
    if ( (__int64)a2 - a1 > 0 )
    {
      v9 = a6;
      v10 = (_QWORD *)a1;
      do
      {
        v11 = *v10;
        v9 += 2;
        v10 += 2;
        *(v9 - 2) = v11;
        *((_DWORD *)v9 - 2) = *((_DWORD *)v10 - 2);
        --v8;
      }
      while ( v8 );
      v12 = v7 - 16;
      if ( !v7 )
        v12 = 0;
      v13 = (__int64)a6 + v12 + 16;
      if ( a2 != (__int64 *)result && a6 != (__int64 *)v13 )
      {
        do
        {
          v15 = *((_DWORD *)a2 + 2);
          v16 = *((_DWORD *)a6 + 2);
          if ( v16 < v15 )
          {
            v14 = *a2;
            a1 += 16;
            *(_DWORD *)(a1 - 8) = v15;
            a2 += 2;
            *(_QWORD *)(a1 - 16) = v14;
            if ( (__int64 *)v13 == a6 )
              return result;
          }
          else
          {
            v17 = *a6;
            a6 += 2;
            *(_DWORD *)(a1 + 8) = v16;
            a1 += 16;
            *(_QWORD *)(a1 - 16) = v17;
            if ( (__int64 *)v13 == a6 )
              return result;
          }
        }
        while ( (__int64 *)result != a2 );
      }
      if ( (__int64 *)v13 != a6 )
      {
        v31 = v13 - (_QWORD)a6;
        result = v31 >> 4;
        if ( v31 > 0 )
        {
          do
          {
            v32 = *a6;
            a1 += 16;
            a6 += 2;
            *(_QWORD *)(a1 - 16) = v32;
            *(_DWORD *)(a1 - 8) = *((_DWORD *)a6 - 2);
            --result;
          }
          while ( result );
        }
      }
    }
  }
  return result;
}

