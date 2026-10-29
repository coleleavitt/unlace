__int64 __fastcall sub_E3DA60(__int64 *a1, __int64 a2)
{
  unsigned __int8 v2; // al
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rax
  unsigned int v8; // ebp
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  size_t v16; // rax
  unsigned int v17; // eax
  size_t v18; // rax
  unsigned int v19; // eax
  size_t v20; // rax
  unsigned int v21; // eax
  size_t v22; // rax
  unsigned int v23; // eax

  v2 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v2 == 24 )
  {
    v3 = *a1;
    v4 = sub_B8C1B0(a2 + 48);
    if ( (*(_BYTE *)(sub_E3D330(v3, v4) + 8) & 0x7F) == 0 )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a2 + 88) + 40LL);
      if ( (v5 & 7) == 0 )
      {
        v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6 )
        {
          v7 = *(_QWORD *)(v6 + 16);
          if ( *(_DWORD *)v7 == 3 && *(_WORD *)(v7 + 16) == 29811 && *(_BYTE *)(v7 + 18) == 100 )
          {
            v8 = 1;
            sub_995540(a1[1], "St");
            return v8;
          }
        }
      }
    }
  }
  else if ( v2 == 72 )
  {
    v10 = sub_E3D330(*a1, a2);
    if ( (*(_BYTE *)(v10 + 8) & 0x7F) == 0x18 )
    {
      LOBYTE(v11) = sub_E3D7C0(a1, v10);
      v8 = v11;
      if ( (_BYTE)v11 )
      {
        if ( !sub_B72C70(a2) )
        {
          v12 = *(_QWORD *)(a2 + 40);
          if ( (v12 & 7) != 0 )
            BUG();
          v13 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16);
          if ( (unsigned int)*(_QWORD *)v13 == 9 )
          {
            if ( *(_QWORD *)(v13 + 16) == 0x6F7461636F6C6C61LL && *(_BYTE *)(v13 + 24) == 114 )
            {
              sub_995540(a1[1], "Sa");
              return v8;
            }
          }
          else if ( (unsigned int)*(_QWORD *)v13 == 12
                 && *(_QWORD *)(v13 + 16) == 0x74735F6369736162LL
                 && *(_DWORD *)(v13 + 24) == 1735289202 )
          {
            sub_995540(a1[1], "Sb");
            return v8;
          }
        }
      }
    }
  }
  else if ( (unsigned int)v2 - 60 <= 1 )
  {
    v14 = sub_E3D330(*a1, a2);
    if ( (*(_BYTE *)(v14 + 8) & 0x7F) == 0x18 && sub_E3D7C0(a1, v14) )
    {
      v15 = sub_BBF290(a2);
      if ( !sub_B72C70(v15) )
      {
        v16 = j__strlen("basic_string");
        LOBYTE(v17) = sub_E3D930(a1, a2, "basic_string", v16, 1);
        v8 = v17;
        if ( (_BYTE)v17 )
        {
          sub_995540(a1[1], "Ss");
          return v8;
        }
        v18 = j__strlen("basic_istream");
        LOBYTE(v19) = sub_E3D930(a1, a2, "basic_istream", v18, 0);
        v8 = v19;
        if ( (_BYTE)v19 )
        {
          sub_995540(a1[1], "Si");
          return v8;
        }
        v20 = j__strlen("basic_ostream");
        LOBYTE(v21) = sub_E3D930(a1, a2, "basic_ostream", v20, 0);
        v8 = v21;
        if ( (_BYTE)v21 )
        {
          sub_995540(a1[1], "So");
          return v8;
        }
        v22 = j__strlen("basic_iostream");
        LOBYTE(v23) = sub_E3D930(a1, a2, "basic_iostream", v22, 0);
        v8 = v23;
        if ( (_BYTE)v23 )
        {
          sub_995540(a1[1], "Sd");
          return v8;
        }
      }
    }
  }
  return 0;
}
