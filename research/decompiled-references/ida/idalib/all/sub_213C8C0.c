__int64 __fastcall sub_213C8C0(__int64 a1, bool a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // r13
  char *v9; // rsi
  unsigned __int64 v10; // rdx
  __int16 v11; // ax
  bool v12; // zf
  unsigned __int8 v14; // al
  unsigned int v15; // ebp
  __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // r14
  bool v19; // dl
  void *v20; // rax
  void *v21; // rax
  __m128 v22; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v23[2]; // [rsp+10h] [rbp-58h] BYREF
  __int16 v24; // [rsp+30h] [rbp-38h]

  v6 = a2;
  v9 = *(char **)(a1 + 320);
  v22 = 0u;
  if ( v9 == *(char **)(a1 + 328) )
  {
    sub_212FB50(a1 + 312, v9, a1 + 300);
  }
  else
  {
    v10 = *(unsigned int *)(a1 + 300);
    v11 = *(_WORD *)(a1 + 304);
    v9 += 8;
    *((_DWORD *)v9 - 2) = v10;
    *((_WORD *)v9 - 2) = v11;
    *(_QWORD *)(a1 + 320) = v9;
  }
  v12 = *(_BYTE *)(a1 + 305) == 0;
  *(_DWORD *)(a1 + 300) = 1;
  if ( v12 )
  {
    v24 = 259;
    *(_QWORD *)&v23[0] = "expected identifier after '.ifdef'";
    v14 = sub_213B1B0(a1, &v22, 259, a4, a5, a6);
    if ( (unsigned __int8)sub_2154470(a1, v14, v23) )
      return 1;
    v15 = sub_21544B0(a1);
    if ( (_BYTE)v15 )
    {
      return 1;
    }
    else
    {
      v16 = *(_QWORD *)(a1 + 16);
      v24 = 261;
      v23[0] = v22;
      v17 = sub_2109620(v16, (void ***)v23);
      v18 = (_QWORD *)v17;
      if ( a2 )
      {
        v19 = 0;
        if ( v17 )
        {
          if ( *(_QWORD *)v17 )
          {
            v19 = a2;
            v6 = 0;
          }
          else
          {
            v19 = 0;
            if ( (*(_BYTE *)(v17 + 9) & 0x70) == 0x20 && (*(_BYTE *)(v17 + 8) & 0x40) == 0 )
            {
              v21 = sub_210D820(*(_QWORD *)(v17 + 24));
              *v18 = v21;
              v19 = v21 != nullptr;
              v6 = v21 == nullptr;
            }
          }
        }
      }
      else
      {
        v19 = 1;
        if ( v17 )
        {
          if ( *(_QWORD *)v17 )
          {
            v19 = 0;
            v6 = 1;
          }
          else if ( (*(_BYTE *)(v17 + 9) & 0x70) == 0x20 && (*(_BYTE *)(v17 + 8) & 0x40) == 0 )
          {
            v20 = sub_210D820(*(_QWORD *)(v17 + 24));
            *v18 = v20;
            v19 = v20 == nullptr;
            v6 = v20 != nullptr;
          }
        }
      }
      *(_BYTE *)(a1 + 305) = v6;
      *(_BYTE *)(a1 + 304) = v19;
      return v15;
    }
  }
  else
  {
    sub_21319B0(a1, (void **)v9, v10, a4, a5, a6);
    return 0;
  }
}
