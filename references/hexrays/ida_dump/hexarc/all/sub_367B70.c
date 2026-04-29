__int64 __fastcall sub_367B70(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rsi
  int v3; // r14d
  int v4; // ebp
  __int64 v5; // rbx
  unsigned int v6; // ebx
  unsigned int v8; // eax
  _DWORD v9[4]; // [rsp+0h] [rbp-68h] BYREF
  _DWORD v10[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+28h] [rbp-40h]

  v11 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 464);
  if ( (_DWORD)v1 && (v2 = *(_QWORD *)(a1 + 328), (_BYTE)v2) && (unsigned int)(*(_DWORD *)(a1 + 72) - 208) > 0x2F )
  {
    sub_3655E0((__int64)v9, v2);
    if ( v9[0] == 3 && (v3 = v1, v4 = 0, (int)v1 > 0) )
    {
      while ( 1 )
      {
        v5 = sub_136BC0((_QWORD *)a1, v4);
        sub_1C0DC0(v10, a1, v5, *(_DWORD *)(v5 + 88));
        if ( (get_tinfo_property(*(_QWORD *)(v5 + 80), 2) & 0xF) == 0xA && !(unsigned int)compare_arglocs(v10, v9) )
          break;
        ++v4;
        cleanup_argloc(v10);
        if ( v3 == v4 )
          goto LABEL_9;
      }
      v8 = *(_DWORD *)(v5 + 8);
      if ( *(_DWORD *)v5 == 4 )
        v8 = (unsigned __int16)v8;
      v6 = v8;
      cleanup_argloc(v10);
    }
    else
    {
LABEL_9:
      v6 = -1;
    }
    cleanup_argloc(v9);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}
