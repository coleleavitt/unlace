/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40D240
// Address: 0x0040D240

//----- (0040D240) --------------------------------------------------------
int __thiscall sub_40D240(int this, int a2, unsigned __int8 a3)
{
  int v4; // eax
  int v5; // eax
  unsigned int *v6; // ebx
  __int16 *v7; // eax
  DWORD v8; // esi
  int v9; // eax
  int v10; // ecx
  char v11; // al
  HANDLE v12; // ecx
  CHAR *v13; // eax
  unsigned __int8 *v14; // eax
  int result; // eax
  _BYTE *v16; // [esp+10h] [ebp-18h] BYREF
  HANDLE hObject; // [esp+14h] [ebp-14h]
  int v18; // [esp+18h] [ebp-10h]
  int v19; // [esp+24h] [ebp-4h]
  _DWORD v20[8]; // [esp+28h] [ebp+0h] BYREF
  CHAR v21[516]; // [esp+48h] [ebp+20h] BYREF
  unsigned __int8 v22[260]; // [esp+24Ch] [ebp+224h] BYREF

  sub_45B9B0((_DWORD *)a2, 11);
  v4 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
  if ( v4 != 1 && v4 != 11 && v4 != 8 )
    goto LABEL_28;
  *(_BYTE *)(a2 + 12) = 1;
  *(_DWORD *)(this + 512) = 2 * a3 + 1;
  if ( *(_DWORD *)(this + 516) != -1 )
  {
    SetEvent(*(HANDLE *)(this + 516));
    *(_DWORD *)(this + 516) = -1;
  }
  v5 = *(_DWORD *)(a2 + 16) & 0xFFFFFFF;
  if ( v5 != 1 && v5 != 11 && v5 != 8 )
  {
LABEL_28:
    if ( byte_4B70F0 )
      __debugbreak();
    sub_4533F0(3295);
  }
  v6 = (unsigned int *)(a2 + 20);
  v7 = &word_4B69CE;
  if ( *(_DWORD *)(a2 + 24) )
    v7 = (__int16 *)*v6;
  *(_BYTE *)v7 = 0;
  *(_DWORD *)(a2 + 32) = -1;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = -1;
  v8 = *(_DWORD *)(this + 256);
  v16 = sub_418F20();
  hObject = (HANDLE)-1;
  v18 = 0;
  v19 = 0;
  v9 = sub_418030(v8);
  v10 = 8;
  if ( v9 == 1 )
    v10 = 24;
  v11 = sub_4146B0((HANDLE *)&v16, v10, v8);
  v12 = hObject;
  if ( v11 )
  {
    v20[0] = 548;
    if ( (*((int (__stdcall **)(HANDLE, _DWORD *))v16 + 3))(hObject, v20) )
    {
      while ( 1 )
      {
        sub_4170A0((unsigned int)v22, v21, 260);
        if ( *(_DWORD *)(this + 492) <= 1u )
          break;
        v13 = (CHAR *)MultiByteStr;
        if ( *(_DWORD *)(this + 492) )
          v13 = *(CHAR **)(this + 488);
        v14 = sub_456590(v13);
        if ( !sub_468261((int)v6, this, v22, v14) )
          break;
        v12 = hObject;
        if ( hObject != (HANDLE)-1 )
          goto LABEL_23;
        if ( !(*((int (__stdcall **)(int, _DWORD *))v16 + 4))(-1, v20) )
          goto LABEL_21;
      }
      sub_403330((int)v6, (unsigned int *)(this + 488));
      *(_DWORD *)(a2 + 32) = v20[5];
      *(_DWORD *)(a2 + 36) = v20[6];
    }
    else
    {
LABEL_21:
      GetLastError();
    }
    v12 = hObject;
  }
LABEL_23:
  v19 = 1;
  if ( v16[28] && v12 != (HANDLE)-1 )
    CloseHandle(v12);
  v19 = -1;
  sub_403330(this + 572, v6);
  *(_DWORD *)(this + 584) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 588) = *(_DWORD *)(a2 + 36);
  result = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 592) = result;
  return result;
}
// 4B69CE: using guessed type __int16 word_4B69CE;
// 4B70F0: using guessed type char byte_4B70F0;
