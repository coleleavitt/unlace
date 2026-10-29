__int64 __fastcall sub_30F400(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  char v5; // al
  __int64 v6; // rbx
  char *v7; // rax
  _QWORD *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v23[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)v2 == 4 )
  {
    v4 = *(unsigned int *)(a1 + 56);
    v5 = sub_11FD80((char *)(v2 + 32), v23, 0);
    v2 = *(_QWORD *)(a1 + 32);
    if ( v5 && v4 == v23[0] )
    {
      sub_125180(a1 + 40, (unsigned __int8 *)(v2 + 64));
      return 0;
    }
    if ( *(_DWORD *)v2 != 20 )
      return 0;
  }
  else if ( *(_DWORD *)v2 != 20 )
  {
    return 0;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1504LL);
  if ( *(_BYTE *)(v2 + 32) == 1 && *(_DWORD *)(v6 + 60) == *(_DWORD *)(v2 + 40) )
  {
    v8 = (_QWORD *)(a1 + 40);
    if ( sub_125B60((unsigned __int8 *)(v2 + 48), a1 + 40, 0) )
      goto LABEL_14;
    v2 = *(_QWORD *)(a1 + 32);
  }
  v7 = (char *)sub_11C8A0(v2, &v22);
  if ( v7 )
  {
    if ( *(_BYTE *)v22 == 1 && *(_DWORD *)(v6 + 60) == *(_DWORD *)(v22 + 8) )
    {
      v8 = v23;
      v9 = *(unsigned int *)(a1 + 56);
      if ( (unsigned __int8)sub_11FD80(v7, v23, 0) )
      {
        if ( v9 == v23[0] )
        {
LABEL_14:
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1496LL);
          **(_DWORD **)(a1 + 32) = 4;
          sub_11CDA0(*(_QWORD *)(a1 + 32) + 48LL);
          v13 = j__qalloc_or_throw(80, (__int64)v8, v11, v12);
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
          *(_QWORD *)(v13 + 40) = 0;
          *(_QWORD *)(v13 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v13 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v13 + 56) = 0;
          *(_QWORD *)(v13 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v13 + 72) = 0;
          sub_330970(v13, v14);
          v15 = *(_QWORD *)(a1 + 32);
          sub_11CDA0(v15 + 32);
          *(_BYTE *)(v15 + 32) = 4;
          *(_QWORD *)(v15 + 40) = v13;
          *(_DWORD *)(*(_QWORD *)(a1 + 32) + 36LL) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
          *(_DWORD *)v13 = 56;
          sub_11D4A0(v13 + 32);
          v18 = j__qalloc_or_throw(312, (__int64)"get_current", v16, v17);
          *(_QWORD *)v18 = -1;
          v19 = v18;
          *(_QWORD *)(v18 + 8) = 0;
          *(_QWORD *)(v18 + 16) = 0;
          *(_QWORD *)(v18 + 24) = 0;
          *(_QWORD *)(v18 + 48) = 0;
          *(_QWORD *)(v18 + 72) = 0;
          *(_QWORD *)(v18 + 80) = 0;
          *(_QWORD *)(v18 + 88) = 0;
          *(_QWORD *)(v18 + 96) = 0;
          *(_QWORD *)(v18 + 104) = 0;
          *(_QWORD *)(v18 + 112) = 0;
          *(_QWORD *)(v18 + 136) = 0;
          *(_QWORD *)(v18 + 144) = 0;
          *(_QWORD *)(v18 + 152) = 0;
          *(_QWORD *)(v18 + 176) = 0;
          *(_QWORD *)(v18 + 184) = 0;
          *(_QWORD *)(v18 + 192) = 0;
          *(_QWORD *)(v18 + 216) = 0;
          *(_QWORD *)(v18 + 240) = 0;
          *(_QWORD *)(v18 + 248) = 0;
          *(_QWORD *)(v18 + 256) = 0;
          *(_QWORD *)(v18 + 280) = 0;
          *(_QWORD *)(v18 + 288) = 0;
          *(_OWORD *)(v18 + 32) = 0;
          *(_OWORD *)(v18 + 56) = 0;
          *(_OWORD *)(v18 + 120) = 0;
          *(_OWORD *)(v18 + 160) = 0;
          *(_OWORD *)(v18 + 200) = 0;
          *(_OWORD *)(v18 + 224) = 0;
          *(_OWORD *)(v18 + 264) = 0;
          *(_OWORD *)(v18 + 296) = 0;
          *(_BYTE *)(v13 + 64) = 8;
          *(_QWORD *)(v13 + 72) = v18;
          *(_DWORD *)(v13 + 68) = *(_DWORD *)(*(_QWORD *)(a1 + 32) + 68LL);
          *(_DWORD *)(v18 + 280) |= 0x15u;
          if ( *(_BYTE *)(v10 + 1304) || (v23[0] = &unk_42D930, (unsigned __int8)deserialize_tinfo()) )
          {
            if ( (unsigned __int8)sub_335200(v19) )
            {
              sub_330290(v19, *(_QWORD *)(a1 + 8));
              v20 = *(_QWORD *)(a1 + 16);
              v21 = *(_DWORD *)(v20 + 24);
              BYTE1(v21) &= ~2u;
              LOBYTE(v21) = v21 | 0x80;
              *(_DWORD *)(v20 + 24) = v21;
              return 0;
            }
            if ( !under_debugger )
              sub_383060(0xC552u, 0.0);
          }
          else if ( !under_debugger )
          {
            sub_383060(0xC82Bu, 0.0);
          }
          BUG();
        }
      }
    }
  }
  return 0;
}
