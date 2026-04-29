__int64 __fastcall sub_33DE10(__int64 a1)
{
  __int64 module_data; // rbx
  unsigned int config2; // ebp
  int v3; // esi
  int v4; // edx
  unsigned int v5; // eax
  int v6; // edx
  __int64 v7; // rdx
  unsigned int v8; // esi

  module_data = get_module_data((unsigned int)dword_4EF998);
  config2 = read_config2(a1, 0, &off_4E5A60, 27, 0, 0, 0, module_data);
  if ( !(_BYTE)config2 )
    return config2;
  v3 = *(_DWORD *)(module_data + 724);
  v4 = *(_DWORD *)(module_data + 604);
  v5 = v4 & 0xFFEFFFFF;
  v6 = v4 | 0x100000;
  if ( (*(_BYTE *)(module_data + 1417) & 1) != 0 )
    v5 = v6;
  *(_DWORD *)(module_data + 604) = v5;
  if ( v3 > 64 )
  {
    if ( ((v3 - 96) & 0xFFFFFFDF) == 0 )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v3 > 3 )
  {
    v7 = 0x1000100000001011LL;
    if ( _bittest64(&v7, (unsigned int)(v3 - 4)) )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( (unsigned int)(v3 - 1) > 1 )
  {
LABEL_11:
    sub_2B4E70((__int64)"PSEUDOCODE_DOCKPOS = 0x%X\nValue is wrong, fallback to DP_RIGHT", v3);
    *(_DWORD *)(module_data + 724) = 4;
  }
LABEL_7:
  v8 = *(_DWORD *)(module_data + 656);
  if ( v8 > 0x100 )
  {
    sub_2B4E70((__int64)"MAX_FUNC_ARGS (%d) exceeds limit, decreased to %u", v8, 256);
    *(_DWORD *)(module_data + 656) = 256;
  }
  return config2;
}
