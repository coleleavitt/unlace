__int64 __fastcall sub_90E3D0(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rbp
  unsigned int v8; // ebx
  __int64 v10; // rax
  __int64 v11; // r12
  void *v12; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v13; // [rsp+8h] [rbp-80h]
  char v14; // [rsp+Ch] [rbp-7Ch]
  int v15; // [rsp+10h] [rbp-78h]
  __int64 v16[13]; // [rsp+20h] [rbp-68h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 24);
  v6 = *(_DWORD *)(v5 + 8);
  *(_DWORD *)(v5 + 8) = 0;
  v13 = v6;
  v12 = *(void **)v5;
  LOBYTE(v6) = *(_BYTE *)(v5 + 12);
  LODWORD(v5) = *(_DWORD *)(v5 + 16);
  v14 = v6;
  v15 = v5;
  sub_A1A5E0(v4, 24);
  v7 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  if ( (unsigned __int8)sub_9D4FE0(a1, a2, v7, 2) && (unsigned __int8)sub_9D7120(a1, a2, v7, 2) )
  {
    sub_A1C030(v16, *(_QWORD *)(v7 + 24), (unsigned int)(a3 + *(_DWORD *)v7), (unsigned int)(a3 + *(_DWORD *)v7));
    v8 = sub_9E26A0(a1, a2, v16);
    if ( (_BYTE)v8 )
    {
      sub_A1DB00(v16);
      v10 = sub_8FA0E0(v16);
      v11 = v10;
      if ( *(_DWORD *)(v10 + 8) <= 0x40u && v13 <= 0x40 )
      {
        *(_QWORD *)v10 = v12;
        *(_DWORD *)(v10 + 8) = v13;
      }
      else
      {
        sub_2585EA0(v10, &v12);
      }
      *(_BYTE *)(v11 + 12) = v14;
      *(_DWORD *)(v11 + 16) = v15;
      sub_A1C0C0(v16);
    }
    else
    {
      sub_A1C0C0(v16);
    }
  }
  else
  {
    v8 = 0;
  }
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  return v8;
}

