/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140018280
// Address: 0x0000000140018280

//----- (0000000140018280) ----------------------------------------------------
char __fastcall sub_140018280(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // ecx
  _BYTE *v7; // r9
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax

  if ( (unsigned __int64)a2 >= *(_QWORD *)(a1 + 24) )
  {
    if ( byte_1400CB61C )
      __debugbreak();
    sub_14005A480(3258);
  }
  v4 = *(_QWORD *)(a1 + 16) + 40LL * a2;
  v5 = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 3 )
  {
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(v4 + 24))(a1, a3, *(_QWORD *)(v4 + 32));
    return 1;
  }
  v7 = (_BYTE *)(*(_QWORD *)(v4 + 16) + a1);
  if ( !v5 )
  {
    v13 = *(_QWORD *)(a3 + 8);
    switch ( *(_QWORD *)(v4 + 32) )
    {
      case 1LL:
        v13 = (unsigned __int8)v13;
        break;
      case 2LL:
        v13 = (unsigned __int16)v13;
        break;
      case 4LL:
        v13 = (unsigned int)v13;
        break;
    }
    switch ( *(_QWORD *)(v4 + 24) )
    {
      case 1LL:
        *v7 = v13;
        break;
      case 2LL:
        *(_WORD *)v7 = v13;
        return 1;
      case 4LL:
        *(_DWORD *)v7 = v13;
        return 1;
      case 8LL:
        *(_QWORD *)v7 = v13;
        return 1;
    }
    return 1;
  }
  v8 = v5 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( v9 )
    {
      if ( v9 == 1 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(3257);
      }
      return 1;
    }
  }
  v10 = *(_DWORD *)a3;
  if ( *(int *)a3 < -1 )
  {
    LODWORD(v11) = 0;
    if ( v10 == -2 )
      LODWORD(v11) = 8;
  }
  else
  {
    v11 = *(_QWORD *)(a3 + 16);
  }
  if ( (int)v11 != *(_QWORD *)(v4 + 24) )
    return 0;
  v12 = (_QWORD *)(a3 + 8);
  if ( v10 >= -1 )
    v12 = (_QWORD *)*v12;
  memcpy(v7, v12, (int)v11);
  return 1;
}
// 1400CB61C: using guessed type char byte_1400CB61C;
