__int64 __fastcall sub_CB5D90(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  bool v4; // zf
  __int64 v5; // r13
  __int64 *v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // ecx
  __int64 v10; // rbx
  __int64 v12; // rsi
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = *(_BYTE *)(a2 + 61) == 0;
  v13[0] = a3;
  if ( !v4 )
    return 1;
  if ( *(_BYTE *)(a2 + 60) )
  {
    v5 = *(_QWORD *)(a2 + 40);
    LOBYTE(v3) = *(_BYTE *)(v5 + 60) & (*(_QWORD *)(v5 + 40) == 0);
    if ( !(_BYTE)v3 )
    {
      v6 = *(__int64 **)(v5 + 32);
      if ( !v6 || (*(_BYTE *)(*v6 + 28) & 0x7Fu) - 59 <= 2 && (v7 = sub_B97300(*v6)) != 0 && *(char *)(v7 + 82) >= 0 )
      {
        v8 = *(_DWORD *)(a2 + 20);
        if ( v8 != -1 )
        {
          v9 = *(_DWORD *)(a2 + 16);
          if ( v8 >= v9 )
          {
            v10 = v8 / v9 - 1;
            while ( (unsigned __int8)sub_D00A60(a1, v10, v13)
                 && (unsigned __int8)sub_D2D780(a1, v13)
                 && (unsigned __int8)sub_CB5D90(a1, v5, v13[0])
                 && (unsigned __int8)sub_D07CE0(a1, v13) )
            {
              if ( --v10 == -1 )
                return 1;
            }
            return v3;
          }
        }
      }
    }
    return 1;
  }
  v12 = *(_QWORD *)(a2 + 32);
  if ( *(_BYTE *)(v12 + 649) )
    return 1;
  return (unsigned int)sub_CB5CF0(a1, (__int64 *)v12, a3);
}
