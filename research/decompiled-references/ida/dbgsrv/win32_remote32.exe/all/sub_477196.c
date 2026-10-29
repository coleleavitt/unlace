/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477196
// Address: 0x00477196

//----- (00477196) --------------------------------------------------------
int __thiscall sub_477196(_DWORD **this)
{
  _DWORD **v1; // ebx
  _DWORD *v2; // edi
  uintptr_t v4; // edx
  char v5; // cl
  _DWORD *v6; // esi
  _DWORD *v7; // edi
  int v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // eax
  bool v12; // zf
  void (__thiscall *v14)(_DWORD); // [esp+Ch] [ebp-10h]
  _DWORD *v15; // [esp+Ch] [ebp-10h]
  _DWORD *v16; // [esp+10h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-4h]

  v1 = this;
  v2 = (_DWORD *)**this;
  if ( !v2 )
    return -1;
  v4 = __security_cookie;
  v5 = __security_cookie & 0x1F;
  v6 = (_DWORD *)__ROR4__(__security_cookie ^ *v2, __security_cookie & 0x1F);
  v7 = (_DWORD *)__ROR4__(__security_cookie ^ v2[1], __security_cookie & 0x1F);
  if ( v6 && v6 != (_DWORD *)-1 )
  {
    v16 = v7;
    while ( --v7 >= v6 )
    {
      v8 = *v7;
      if ( *v7 != v17 )
      {
        *v7 = v17;
        v14 = (void (__thiscall *)(_DWORD))__ROR4__(v4 ^ v8, v5);
        v14(v14);
        v4 = __security_cookie;
        v5 = __security_cookie & 0x1F;
        v9 = (_DWORD *)**v1;
        v10 = (_DWORD *)__ROR4__(__security_cookie ^ *v9, __security_cookie & 0x1F);
        v11 = (_DWORD *)__ROR4__(__security_cookie ^ v9[1], __security_cookie & 0x1F);
        v12 = v10 == v6;
        v15 = v10;
        v1 = this;
        if ( !v12 || v11 != v16 )
        {
          v6 = v15;
          v7 = v11;
          v16 = v11;
        }
      }
    }
    if ( v6 != (_DWORD *)-1 )
    {
      sub_479216(v6);
      v4 = __security_cookie;
    }
    *(_DWORD *)**v1 = v4;
    *(_DWORD *)(**v1 + 4) = v4;
    *(_DWORD *)(**v1 + 8) = v4;
  }
  return 0;
}
// 4771F4: variable 'v17' is possibly undefined
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
