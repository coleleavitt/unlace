__int64 __fastcall sub_297E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // ebx
  __int64 v6; // r13
  __int64 result; // rax
  int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  v4 = *(unsigned __int8 *)(a1 + 131);
  v12 = __readfsqword(0x28u);
  if ( v4 == (_DWORD)a3 )
  {
    v10[0] = 8;
    copy_tinfo_t(a2, v10);
    clear_tinfo_t(v10);
    return 1;
  }
  v5 = a3;
  v6 = *(unsigned __int8 *)(a1 + 130);
  if ( (_DWORD)v6 == (_DWORD)a3 )
  {
    v8 = *(_DWORD *)(a1 + 920);
    if ( v8 == -1 )
    {
      *(_DWORD *)(a1 + 920) = 0;
      v11 = 256;
      v9 = 0;
      v10[1] = "BOOL";
      v10[0] = get_idati(a1, a2, a3, a4);
      if ( (unsigned __int8)create_tinfo(&v9, 61, 61, v10) )
      {
        if ( v6 == get_tinfo_size(0, v9, 0) )
          *(_DWORD *)(a1 + 920) = 1;
      }
      else
      {
        *(_DWORD *)(a1 + 920) = 1;
        v10[0] = 7;
        copy_tinfo_t(&v9, v10);
        clear_tinfo_t(v10);
        save_tinfo(&v9, 0, 0, "BOOL", 1);
      }
      clear_tinfo_t(&v9);
      v8 = *(_DWORD *)(a1 + 920);
    }
    if ( v8 )
    {
      sub_325A00(v10, "BOOL");
      copy_tinfo_t(a2, v10);
      clear_tinfo_t(v10);
      return 1;
    }
  }
  if ( v5 == 1 )
    goto LABEL_8;
  result = *(unsigned __int8 *)(a1 + 144);
  if ( (_BYTE)result )
  {
    result = 0;
    if ( ((v5 - 4) & 0xFFFFFFFB) != 0 )
      return result;
LABEL_8:
    v10[0] = byte_4072A0[v5 >> 1];
    copy_tinfo_t(a2, v10);
    clear_tinfo_t(v10);
    return 1;
  }
  if ( ((v5 - 2) & 0xFFFFFFFD) == 0 )
    goto LABEL_8;
  return result;
}
