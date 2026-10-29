/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deep_copy_idcv
// Address: 0x0005BCD0

//----- (0005BCD0) --------------------------------------------------------
int __cdecl deep_copy_idcv(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // ecx
  _DWORD *v4; // esi
  _DWORD *v5; // edi
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  int v8; // esi
  bool v9; // zf
  int v11; // [esp+1Ch] [ebp-30h]
  _DWORD *v12; // [esp+20h] [ebp-2Ch]
  _DWORD *v13; // [esp+24h] [ebp-28h]
  _DWORD v14[9]; // [esp+28h] [ebp-24h] BYREF

  v14[4] = __readgsdword(0x14u);
  if ( *(_BYTE *)a2 != 5 )
    return copy_idcv((char *)a1, (char *)a2);
  v2 = operator new(0x14u);
  v3 = *(_DWORD **)(a2 + 4);
  v2[1] = 0;
  v2[2] = 0;
  v11 = (int)v2;
  v13 = v2 + 1;
  *v2 = v2 + 1;
  v4 = (_DWORD *)*v3;
  v12 = v3;
  v5 = v3 + 1;
  if ( v3 + 1 != (_DWORD *)*v3 )
  {
    do
    {
      v14[2] = v13;
      sub_681E0(v14, v11, v13, (int)(v4 + 4), (int)(v4 + 4));
      v6 = (_DWORD *)v4[1];
      if ( v6 )
      {
        do
        {
          v7 = v6;
          v6 = (_DWORD *)*v6;
        }
        while ( v6 );
      }
      else
      {
        v7 = (_DWORD *)v4[2];
        if ( (_DWORD *)*v7 != v4 )
        {
          v8 = (int)(v4 + 2);
          do
          {
            v7 = *(_DWORD **)(*(_DWORD *)v8 + 8);
            v9 = *v7 == *(_DWORD *)v8;
            v8 = *(_DWORD *)v8 + 8;
          }
          while ( !v9 );
        }
      }
      v4 = v7;
    }
    while ( v5 != v7 );
  }
  *(_DWORD *)(v11 + 12) = 1;
  *(_DWORD *)(v11 + 16) = v12[4];
  free_idcv((char *)a1);
  *(_BYTE *)a1 = 5;
  *(_DWORD *)(a1 + 4) = v11;
  return 0;
}
