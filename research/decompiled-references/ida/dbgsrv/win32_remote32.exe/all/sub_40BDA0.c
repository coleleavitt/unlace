/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40BDA0
// Address: 0x0040BDA0

//----- (0040BDA0) --------------------------------------------------------
_DWORD *__thiscall sub_40BDA0(int *this, unsigned int a2)
{
  unsigned int v3; // ecx
  unsigned int v4; // ecx
  int v5; // esi
  _DWORD *v6; // ebp
  int v7; // edi
  _DWORD *result; // eax
  _DWORD *i; // ecx
  unsigned int v10; // edi
  _DWORD *v11; // ebx
  _DWORD *v12; // ebp
  _DWORD *v13; // edx
  int v14; // edi
  _DWORD *v15; // edx
  _DWORD *v16; // ebx
  _DWORD *v17; // edi
  _DWORD *v18; // edx
  _DWORD *v19; // ebp
  _DWORD *v20; // ebx
  _DWORD *v21; // edi
  _DWORD *v22; // ebx
  _DWORD *v23; // ebp
  _DWORD *v24; // edi
  _DWORD *v25; // edx
  _DWORD *v26; // [esp+4h] [ebp-8h]
  int *v27; // [esp+8h] [ebp-4h]
  _DWORD *v28; // [esp+10h] [ebp+4h]

  _BitScanReverse(&v3, 0x1FFFFFFFu);
  v27 = this;
  if ( a2 > 1 << v3 )
    sub_4627A2((int)"invalid hash bucket count");
  _BitScanReverse(&v4, (a2 - 1) | 1);
  v5 = *(this + 1);
  v6 = this + 3;
  v7 = 1 << (v4 + 1);
  sub_40B9C0((int)(this + 3), 2 * v7, v5);
  *(this + 7) = v7;
  *(this + 6) = v7 - 1;
  result = *(_DWORD **)*(this + 1);
  for ( i = result; i != (_DWORD *)v5; v6 = v27 + 3 )
  {
    i = (_DWORD *)*i;
    v10 = (16777619
         * (*((unsigned __int8 *)result + 11)
          ^ (16777619
           * (*((unsigned __int8 *)result + 10)
            ^ (16777619
             * (*((unsigned __int8 *)result + 9) ^ (16777619 * (*((unsigned __int8 *)result + 8) ^ 0x811C9DC5))))))))
        & *(this + 6);
    v11 = *(_DWORD **)(*v6 + 8 * v10);
    v12 = (_DWORD *)(*v6 + 8 * v10);
    v28 = v12;
    if ( v11 == (_DWORD *)v5 )
    {
      *v12 = result;
      v12[1] = result;
    }
    else
    {
      v13 = (_DWORD *)v12[1];
      v14 = result[2];
      if ( v14 == v13[2] )
      {
        v15 = (_DWORD *)*v13;
        v26 = v15;
        if ( v15 != result )
        {
          v16 = (_DWORD *)result[1];
          *v16 = i;
          v17 = (_DWORD *)i[1];
          *v17 = v15;
          v18 = (_DWORD *)v15[1];
          *v18 = result;
          v26[1] = v17;
          i[1] = v16;
          result[1] = v18;
        }
        v12[1] = result;
      }
      else if ( v11 == v13 )
      {
LABEL_12:
        v19 = (_DWORD *)result[1];
        *v19 = i;
        v20 = (_DWORD *)i[1];
        *v20 = v13;
        v21 = (_DWORD *)v13[1];
        *v21 = result;
        v13[1] = v20;
        i[1] = v19;
        result[1] = v21;
        *v28 = result;
      }
      else
      {
        while ( 1 )
        {
          v13 = (_DWORD *)v13[1];
          if ( v14 == v13[2] )
            break;
          if ( v11 == v13 )
            goto LABEL_12;
        }
        v22 = (_DWORD *)result[1];
        v23 = (_DWORD *)*v13;
        *v22 = i;
        v24 = (_DWORD *)i[1];
        *v24 = v23;
        v25 = (_DWORD *)v23[1];
        *v25 = result;
        v23[1] = v24;
        i[1] = v22;
        result[1] = v25;
      }
    }
    this = v27;
    result = i;
  }
  return result;
}
