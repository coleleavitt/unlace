__int64 __fastcall sub_3A52C0(__int64 a1, unsigned int a2)
{
  __int64 *v2; // r13
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rax
  __int64 *v8; // rcx
  __int64 v9; // rdx
  _QWORD v11[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h] BYREF

  v12 = __readfsqword(0x28u);
  v2 = v11;
  v3 = *(_QWORD *)(qword_2CA1698 + 1384);
  v11[0] = v3 + 72;
  v11[1] = v3 + 120;
  v11[2] = v3 + 168;
  while ( 1 )
  {
    v4 = *v2 + 8;
    v5 = sub_3A5200(*v2, a2, 0xFFFFFFFF);
    v6 = v5;
    if ( v5 != v4 )
    {
      v7 = *(__int64 **)(v5 + 40);
      v8 = &v7[*(_QWORD *)(v6 + 48)];
      if ( v8 != v7 )
        break;
    }
LABEL_9:
    if ( ++v2 == (__int64 *)&v12 )
      return 0;
  }
  while ( 1 )
  {
    v9 = *v7;
    if ( *(_DWORD *)(*v7 + 40) != 3
      && (*(_BYTE *)(v9 + 68) & 2) != 0
      && (*(_DWORD *)(v9 + 56) != 4 || *(_DWORD *)(v9 + 52) == a2) )
    {
      return v9;
    }
    if ( v8 == ++v7 )
      goto LABEL_9;
  }
}

