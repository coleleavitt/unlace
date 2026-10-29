/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_431A00
// Address: 0x00431A00

//----- (00431A00) --------------------------------------------------------
_DWORD *__thiscall sub_431A00(_DWORD *this, _DWORD *a2, _DWORD *a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi
  _DWORD *v5; // esi
  unsigned int v6; // edx
  int i; // ebx
  int v8; // eax
  void **v9; // ebx
  _DWORD *v10; // ebx
  _DWORD *v11; // ecx
  _DWORD *v12; // eax
  _DWORD *v13; // edx
  unsigned int v14; // ecx
  int v15; // edi
  int v16; // eax
  void **v17; // ebx
  _DWORD *v18; // [esp+10h] [ebp-2Ch]
  _DWORD *v19; // [esp+10h] [ebp-2Ch]
  _DWORD *v20; // [esp+14h] [ebp-28h]
  _DWORD *v21; // [esp+14h] [ebp-28h]
  _DWORD *v22; // [esp+18h] [ebp-24h]
  int v23; // [esp+1Ch] [ebp-20h]
  _DWORD *v24; // [esp+20h] [ebp-1Ch]
  _DWORD *v25; // [esp+24h] [ebp-18h]
  _DWORD *v26; // [esp+28h] [ebp-14h]
  _DWORD *v28; // [esp+44h] [ebp+8h]

  result = a3;
  if ( a2 != a3 )
  {
    v4 = a2 + 2;
    v5 = a2;
    v22 = (_DWORD *)*(this + 1);
    v23 = *(this + 3);
    v26 = (_DWORD *)a2[1];
    if ( a2[7] > 0xFu )
      v4 = (_DWORD *)*v4;
    v6 = 0;
    for ( i = -2128831035; v6 < a2[6]; i = 16777619 * (i ^ v8) )
      v8 = *((unsigned __int8 *)v4 + v6++);
    v25 = (_DWORD *)(v23 + 8 * (i & *(this + 6)));
    v24 = (_DWORD *)*v25;
    v20 = (_DWORD *)v25[1];
    while ( 1 )
    {
      v9 = (void **)v5;
      v18 = v5;
      v5 = (_DWORD *)*v5;
      sub_426200(v9 + 8);
      sub_430D50((int)(v9 + 2), (int)v9, (int)v4);
      sub_4627F2(v9);
      v10 = this;
      --*(this + 2);
      if ( v18 == v20 )
        break;
      result = a3;
      if ( v5 == a3 )
      {
        if ( v24 == a2 )
        {
          v11 = v25;
LABEL_24:
          *v11 = v5;
        }
        goto LABEL_25;
      }
    }
    if ( v24 == a2 )
    {
      v12 = v22;
      *v25 = v22;
    }
    else
    {
      v12 = v26;
    }
    v25[1] = v12;
    for ( result = a3; v5 != a3; v28[1] = v22 )
    {
      v13 = v5 + 2;
      if ( v5[7] > 0xFu )
        v13 = (_DWORD *)*v13;
      v14 = 0;
      v15 = -2128831035;
      if ( v5[6] )
      {
        do
        {
          v16 = *((unsigned __int8 *)v13 + v14++);
          v15 = 16777619 * (v15 ^ v16);
        }
        while ( v14 < v5[6] );
        v10 = this;
      }
      v28 = (_DWORD *)(v23 + 8 * (v15 & v10[6]));
      v19 = (_DWORD *)v28[1];
      while ( 1 )
      {
        v17 = (void **)v5;
        v21 = v5;
        v5 = (_DWORD *)*v5;
        sub_426200(v17 + 8);
        sub_430D50((int)(v17 + 2), (int)v17, v15);
        sub_4627F2(v17);
        v10 = this;
        --*(this + 2);
        result = a3;
        if ( v21 == v19 )
          break;
        if ( v5 == a3 )
        {
          v11 = v28;
          goto LABEL_24;
        }
      }
      *v28 = v22;
    }
LABEL_25:
    *v26 = v5;
    v5[1] = v26;
  }
  return result;
}
