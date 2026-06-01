/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4413E0
// Address: 0x004413E0

//----- (004413E0) --------------------------------------------------------
int __thiscall sub_4413E0(void *this)
{
  int v2; // ebx
  int v3; // esi
  void *v4; // eax
  int v5; // esi
  const CHAR *v6; // ecx
  const CHAR *v7; // edx
  char *v8; // eax
  unsigned __int8 *v9; // eax
  const CHAR *v10; // eax
  const CHAR *v11; // eax
  int v12; // esi
  const CHAR *v13; // ecx
  char *v14; // eax
  void *v16; // [esp+10h] [ebp-24h] BYREF
  int v17; // [esp+14h] [ebp-20h]
  void *v18; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  unsigned int v20; // [esp+24h] [ebp-10h]
  int v21; // [esp+30h] [ebp-4h]
  _WORD v22[130]; // [esp+34h] [ebp+0h] BYREF

  v2 = 0;
  if ( !*((_DWORD *)this + 258) || ((*((_DWORD *)this + 267) - 1) & (unsigned int)-(*((_DWORD *)this + 267) != 0)) <= 2 )
  {
LABEL_20:
    if ( *((_DWORD *)this + 264) > 1u )
    {
      v9 = (unsigned __int8 *)MultiByteStr;
      if ( *((_DWORD *)this + 261) )
        v9 = *((unsigned __int8 **)this + 260);
      if ( sub_4565E0(v22, 0x104u, v9) )
      {
        v10 = MultiByteStr;
        if ( *((_DWORD *)this + 264) )
          v10 = *((const CHAR **)this + 263);
        sub_4569C0((__int8 *)this + 4, 1024, (char *)v22, v10, 0);
        v2 = (**(int (__thiscall ***)(void *, int))this)(this, 1);
        sub_441A10(
          this,
          "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
          "DEBUGLINK",
          (const char *)this + 4,
          v2);
        if ( !v2 )
        {
          v11 = MultiByteStr;
          if ( *((_DWORD *)this + 264) )
            v11 = *((const CHAR **)this + 263);
          sub_4569C0((__int8 *)this + 4, 1024, (char *)v22, ".debug", v11, 0);
          v2 = (**(int (__thiscall ***)(void *, int))this)(this, 1);
          sub_441A10(
            this,
            "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
            "DEBUGLINK",
            (const char *)this + 4,
            v2);
          if ( !v2 )
          {
            v12 = *((_DWORD *)this + 257);
            if ( v12 != v12 + 12 * *((_DWORD *)this + 258) )
            {
              do
              {
                v13 = MultiByteStr;
                if ( *((_DWORD *)this + 264) )
                  v13 = *((const CHAR **)this + 263);
                v14 = (char *)MultiByteStr;
                if ( *(_DWORD *)(v12 + 4) )
                  v14 = *(char **)v12;
                sub_4569C0((__int8 *)this + 4, 1024, v14, v22, v13, 0);
                v2 = (**(int (__thiscall ***)(void *, int))this)(this, 1);
                sub_441A10(
                  this,
                  "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
                  "DEBUGLINK",
                  (const char *)this + 4,
                  v2);
                if ( v2 )
                  break;
                v12 += 12;
              }
              while ( v12 != *((_DWORD *)this + 257) + 12 * *((_DWORD *)this + 258) );
            }
          }
        }
      }
    }
    return v2;
  }
  sub_4484B0((const CHAR **)this + 266, &v16, 0, 2u);
  v21 = 0;
  sub_4484B0((const CHAR **)this + 266, &v18, 2u, 0xFFFFFFFF);
  LOBYTE(v21) = 1;
  v3 = v19 != 0 ? v19 - 1 : 0;
  if ( v3 + 7 <= v20 )
  {
    v4 = v18;
  }
  else
  {
    v4 = sub_453B00((int)&v18, v18, v3 + 7, 1u);
    v18 = v4;
  }
  v19 = v3 + 7;
  *((_BYTE *)v4 + v3 + 6) = 0;
  sub_464310((unsigned int)v18 + v3, (unsigned int)".debug", 6u);
  v5 = *((_DWORD *)this + 257);
  if ( v5 == v5 + 12 * *((_DWORD *)this + 258) )
  {
LABEL_15:
    LOBYTE(v21) = 4;
    if ( v18 )
    {
      v19 = 0;
      sub_453A20(v18);
      v18 = nullptr;
      v20 = 0;
    }
    v21 = 5;
    if ( v16 )
    {
      v17 = 0;
      sub_453A20(v16);
    }
    v21 = -1;
    goto LABEL_20;
  }
  while ( 1 )
  {
    v6 = MultiByteStr;
    v7 = MultiByteStr;
    if ( v19 )
      v6 = (const CHAR *)v18;
    v8 = (char *)MultiByteStr;
    if ( v17 )
      v7 = (const CHAR *)v16;
    if ( *(_DWORD *)(v5 + 4) )
      v8 = *(char **)v5;
    sub_4569C0((__int8 *)this + 4, 1024, v8, ".build-id", v7, v6, 0);
    v2 = (**(int (__thiscall ***)(void *, _DWORD))this)(this, 0);
    sub_441A10(
      this,
      "debug_info_file_visitor_t::visit_fullpath(check_method=%s), fullpath=%s => %d\n",
      "BUILDID",
      (const char *)this + 4,
      v2);
    if ( v2 )
      break;
    v5 += 12;
    if ( v5 == *((_DWORD *)this + 257) + 12 * *((_DWORD *)this + 258) )
      goto LABEL_15;
  }
  LOBYTE(v21) = 2;
  if ( v18 )
  {
    v19 = 0;
    sub_453A20(v18);
    v18 = nullptr;
    v20 = 0;
  }
  v21 = 3;
  if ( v16 )
  {
    v17 = 0;
    sub_453A20(v16);
  }
  return v2;
}
// 441A10: using guessed type _DWORD sub_441A10(_DWORD, _DWORD, ...);
