__int64 __fastcall sub_38C590(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdi
  int v6; // eax
  _QWORD v7[6]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  unsigned __int64 v9; // [rsp+38h] [rbp-20h]

  v9 = __readfsqword(0x28u);
  v1 = 0;
  if ( *(_DWORD *)(a1 + 80) == 1 )
  {
    v2 = *(__int64 **)(a1 + 88);
    v3 = *v2;
    if ( *v2 != -1 )
    {
      v4 = *(_QWORD *)(a1 + 24);
      memset(&v7[1], 0, 32);
      v7[0] = off_4E6A48;
      v7[5] = v3;
      v8 = 0;
      if ( !(unsigned int)sub_11FC20(v4, (__int64)v7) )
        return 0;
      v1 = v8;
      if ( (unsigned __int8)sub_120560(v8, nullptr) )
        return v1;
      if ( (*(_BYTE *)(v1 + 5) & 8) != 0 || (v6 = *((_DWORD *)v2 + 2), (unsigned int)(v6 - 2) <= 0xD) || v6 == 51 )
      {
        if ( *(int *)(v1 + 36) <= 1 )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return v1;
}
