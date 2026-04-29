__int64 __fastcall sub_39400(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  int v10; // ebp
  __int64 *v11; // rax
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  const char *v15; // rsi
  const char *v16; // rbp
  __int64 *v17; // rax
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  const char *v21; // rsi
  _QWORD v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  v2 = *(_BYTE *)(a1 + 142);
  if ( v2 == 5 || v2 <= 2u )
    return 0;
  if ( v2 != 4 )
  {
    v4 = 0;
    v23[0] = 0xC22A8F911A1FBCD9LL;
    v5 = sub_856E0(v23, a1 + 64);
    v6 = sub_856E0(v5, a1 + 72);
    v7 = (__int64 *)sub_85680(v6, *(unsigned int *)(a1 + 136));
    sub_349E0(a1, v7);
    if ( *(_QWORD *)(a1 + 152) )
    {
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v4) + 72LL);
          if ( v8 )
          {
            v9 = *(_QWORD *)(a1 + 72) ^ v8;
            *(_QWORD *)(a1 + 72) = v9;
            v10 = v9;
            if ( (debug & 0x400000) != 0 )
              break;
          }
          if ( ++v4 >= *(_QWORD *)(a1 + 152) )
            goto LABEL_12;
        }
        v11 = sub_34340(a1);
        v15 = src;
        if ( v11[1] )
          v15 = (const char *)*v11;
        ++v4;
        sub_88B80((unsigned int)"%s type_hash -> %llx\n", (_DWORD)v15, v10, v12, v13, v14);
      }
      while ( v4 < *(_QWORD *)(a1 + 152) );
    }
LABEL_12:
    if ( *(_QWORD *)(a1 + 64) && !(unsigned __int8)sub_38360(a1) )
    {
      if ( (debug & 0x400000) != 0 )
      {
        v16 = src;
        if ( *(_QWORD *)(a1 + 48) )
          v16 = *(const char **)(a1 + 40);
        v17 = sub_34340(a1);
        v21 = src;
        if ( v17[1] )
          v21 = (const char *)*v17;
        sub_88B80((unsigned int)"Error enumeration DIE %s storing type %s\n", (_DWORD)v21, (_DWORD)v16, v18, v19, v20);
      }
      return 0;
    }
    sub_34840(a1, 4u);
  }
  copy_tinfo_t(a2, a1 + 8);
  return 1;
}
