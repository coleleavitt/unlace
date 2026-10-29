/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44F120
// Address: 0x0044F120

//----- (0044F120) --------------------------------------------------------
char __thiscall sub_44F120(SOCKET *this, int a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // esi
  const CHAR *v6; // eax
  _DWORD *v7; // eax
  volatile signed __int32 *v8; // esi
  _DWORD *v9; // ebx
  volatile signed __int32 *v10; // edi
  volatile signed __int32 *v11; // ebx
  DWORD v12; // edx
  unsigned int v13; // eax
  int (__cdecl *v14)(const CHAR *); // esi
  char v15; // al
  int v16; // eax
  HANDLE *v18; // eax
  bool v19; // zf
  int *v20; // esi
  const char *v21; // eax
  unsigned __int8 *v22; // eax
  const char *v23; // eax
  int v24; // esi
  int v25; // esi
  int v26; // eax
  int v27; // eax
  HANDLE *v28; // eax
  const char *v29; // ecx
  char *v30; // eax
  unsigned __int8 *v31; // [esp+10h] [ebp-50h] BYREF
  int v32; // [esp+14h] [ebp-4Ch]
  unsigned int v33; // [esp+1Ch] [ebp-44h]
  DWORD v34; // [esp+20h] [ebp-40h]
  int v35; // [esp+24h] [ebp-3Ch] BYREF
  char *v36; // [esp+28h] [ebp-38h] BYREF
  int v37; // [esp+2Ch] [ebp-34h]
  int v38; // [esp+30h] [ebp-30h]
  volatile signed __int32 *v39[2]; // [esp+34h] [ebp-2Ch] BYREF
  const CHAR *v40; // [esp+3Ch] [ebp-24h] BYREF
  _BYTE *v41; // [esp+40h] [ebp-20h] BYREF
  int v42; // [esp+44h] [ebp-1Ch]
  int v43; // [esp+48h] [ebp-18h]
  int v44; // [esp+4Ch] [ebp-14h]
  HANDLE *v45; // [esp+50h] [ebp-10h] BYREF
  int v46; // [esp+5Ch] [ebp-4h]
  struct WSAData WSAData; // [esp+60h] [ebp+0h] BYREF
  __m128i v48[63]; // [esp+1F0h] [ebp+190h] BYREF
  char v49; // [esp+5EFh] [ebp+58Fh]
  char v50[68]; // [esp+5F0h] [ebp+590h] BYREF
  _DWORD v51[9]; // [esp+634h] [ebp+5D4h] BYREF
  _DWORD v52[3]; // [esp+658h] [ebp+5F8h] BYREF
  __int64 v53; // [esp+664h] [ebp+604h]
  __int64 v54; // [esp+66Ch] [ebp+60Ch]
  int v55; // [esp+674h] [ebp+614h]

  v3 = protocol;
  v4 = a2;
  v44 = a2;
  if ( protocol )
  {
    v3 = WSAStartup(2u, &WSAData);
    protocol = v3;
    if ( v3 )
    {
      *(this + 11) = (SOCKET)"WSAStartup";
    }
    else
    {
      sub_462A4C((int)WSACleanup);
      v3 = protocol;
    }
    v4 = v44;
  }
  *(this + 12) = v3;
  if ( v3 )
    return 0;
  v33 = *(_DWORD *)(v4 + 48);
  v55 = 0;
  v53 = 0;
  v54 = 0;
  v52[0] = 2;
  v5 = v4 + 4 + (v33 > 1 ? 0x28 : 0);
  v52[1] = 0;
  v52[2] = 1;
  sub_453D50((__m128i)0LL, v51, 33, "%d", *(unsigned __int16 *)(v5 + 12));
  v6 = MultiByteStr;
  if ( *(_DWORD *)(v5 + 4) )
    v6 = *(const CHAR **)v5;
  v40 = v6;
  sub_44E0E0(v39, (unsigned int *)&v40, (const char *)v51, v52);
  v46 = 0;
  v7 = sub_4627C2(8u);
  v8 = v39[1];
  v9 = v7;
  if ( v7 )
  {
    *v7 = 0;
    v7[1] = 0;
    if ( v8 )
      _InterlockedIncrement(v8 + 1);
    *v7 = v39[0];
    v7[1] = v8;
  }
  else
  {
    v9 = nullptr;
  }
  v45 = (HANDLE *)sub_456450((LPTHREAD_START_ROUTINE)sub_44F970, v9);
  if ( !v45 )
  {
    *(this + 11) = (SOCKET)"qthread_create";
    *(this + 12) = WSAGetLastError();
    if ( v9 )
    {
      v10 = (volatile signed __int32 *)v9[1];
      if ( v10 )
      {
        if ( !_InterlockedExchangeAdd(v10 + 1, 0xFFFFFFFF) )
        {
          (**(void (__thiscall ***)(volatile signed __int32 *))v10)(v10);
          if ( !_InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) )
            (*(void (__thiscall **)(volatile signed __int32 *))(*v10 + 4))(v10);
        }
      }
      sub_4627F2(v9);
    }
    if ( v8 && !_InterlockedExchangeAdd(v8 + 1, 0xFFFFFFFF) )
    {
      (**(void (__thiscall ***)(volatile signed __int32 *))v8)(v8);
      if ( !_InterlockedDecrement(v8 + 2) )
        (*(void (__thiscall **)(volatile signed __int32 *))(*v8 + 4))(v8);
    }
    return 0;
  }
  v11 = v39[0];
  v35 = v44 + 84;
  v12 = *(_DWORD *)(v44 + 92);
  v13 = *(_DWORD *)(v44 + 88);
  v14 = *(int (__cdecl **)(const CHAR *))(v44 + 84);
  v34 = v12;
  v40 = (const CHAR *)v13;
  while ( !sub_456370(*((HANDLE *)v11 + 2), v12) )
  {
    if ( v14 )
    {
      v15 = v14(v40);
      v12 = v34;
      if ( !v15 )
        continue;
    }
    sub_4562D0(*((LPCRITICAL_SECTION *)v11 + 1));
    *((_BYTE *)v11 + 72) = 1;
    sub_4562F0(*((LPCRITICAL_SECTION *)v11 + 1));
    sub_4564E0(v45);
    *(this + 11) = (SOCKET)"getaddrinfo";
    v16 = 1223;
    if ( !v14 )
      v16 = 258;
    *(this + 12) = v16;
LABEL_32:
    sub_44E290(v39);
    return 0;
  }
  sub_456510(v45);
  *(this + 12) = *((_DWORD *)v11 + 17);
  v18 = (HANDLE *)*v11;
  *v11 = 0;
  v19 = *(this + 12) == 0;
  v45 = v18;
  if ( !v19 )
  {
    *(this + 11) = (SOCKET)"gai_strerror";
    goto LABEL_32;
  }
  LOBYTE(v11) = 0;
  v20 = (int *)v18;
  if ( !v18 )
  {
LABEL_43:
    sub_44FD40((int)v11, (int)this);
    goto LABEL_44;
  }
  while ( sub_44FD60((int)v11, (int)this, v20[6], v20[4], (int)v50, 66, (int)v52, 33, 10) )
  {
    *(this + 11) = (SOCKET)"getnameinfo";
    *(this + 12) = WSAGetLastError();
LABEL_42:
    v20 = (int *)v20[7];
    if ( !v20 )
      goto LABEL_43;
  }
  if ( !sub_44EF70(this, v20[1], v20[2], v20[3]) )
    goto LABEL_42;
  if ( !sub_44ED90(this, (u_long)v20, v35) )
  {
    (*(void (__thiscall **)(SOCKET *, int))(*this + 32))(this, -1);
    goto LABEL_42;
  }
  LOBYTE(v11) = 1;
  sub_44FD40((int)v11, (int)this);
  if ( v33 <= 1 )
    goto LABEL_44;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  LOBYTE(v46) = 1;
  v21 = MultiByteStr;
  v11 = (volatile signed __int32 *)v44;
  v45 = nullptr;
  if ( *(_DWORD *)(v44 + 8) )
    v21 = *(const char **)(v44 + 4);
  sub_402970((__m128i)0LL, (LPVOID *)&v41, "CONNECT %s:%d HTTP/1.1\n", v21, *(unsigned __int16 *)(v44 + 16));
  if ( *((_DWORD *)v11 + 16) > 1u )
  {
    sub_402AD0(&v31, (unsigned int *)v11 + 15);
    LOBYTE(v46) = 2;
    sub_4042E0((int)&v31, 58);
    sub_40CC20((int)&v31, (unsigned int *)v11 + 18);
    v36 = nullptr;
    v37 = 0;
    v38 = 0;
    LOBYTE(v46) = 3;
    v22 = (unsigned __int8 *)MultiByteStr;
    if ( v32 )
      v22 = v31;
    sub_461790((int)&v36, v22, v32 != 0 ? v32 - 1 : 0);
    v23 = MultiByteStr;
    if ( v37 )
      v23 = v36;
    sub_41F840((__m128i)0LL, (int)&v41, "Proxy-Authorization: Basic %s\n", v23);
    LOBYTE(v46) = 4;
    if ( v36 )
    {
      v37 = 0;
      sub_453A20(v36);
      v36 = nullptr;
      v38 = 0;
    }
    LOBYTE(v46) = 1;
    sub_401400((void **)&v31);
  }
  v24 = v42 != 0 ? v42 - 1 : 0;
  sub_402940((int)&v41, v24 + 2);
  v41[v24] = 10;
  v41[v24 + 1] = 0;
  if ( (dword_4B70EC & 0x100000) != 0 )
    sub_402760("Attempting HTTP CONNECT through proxy (%s:%d), by sending:\n---\n%s\n---\n");
  v25 = v42 != 0 ? v42 - 1 : 0;
  v26 = sub_44D770((int)this, (int)v41, v25);
  LOBYTE(v11) = v26 == v25;
  if ( v26 == v25 && (v27 = sub_44F900((__m128i)0LL, v48, 1024, (int)this), (LOBYTE(v11) = v27 > 0) != 0) )
  {
    v49 = 0;
    if ( (dword_4B70EC & 0x100000) != 0 )
      sub_402760("Received:\n---\n%s\n---\n");
    v19 = sub_453D70((int)v11, v48, "HTTP/1.%d %d", &v35, &v45) == 2;
    v28 = v45;
    if ( v19 && v45 == (HANDLE *)200 )
    {
      LOBYTE(v11) = 1;
      goto LABEL_73;
    }
    LOBYTE(v11) = 0;
LABEL_68:
    v29 = "connecting to proxy";
    v30 = (char *)v28 - 401;
    if ( v30 )
    {
      if ( v30 == (char *)6 )
        v29 = "connecting to proxy (authentication required)";
    }
    else
    {
      v29 = "connecting to proxy (unauthorized)";
    }
    *(this + 11) = (SOCKET)v29;
    *(this + 12) = WSAGetLastError();
  }
  else if ( !(_BYTE)v11 )
  {
    v28 = v45;
    goto LABEL_68;
  }
LABEL_73:
  LOBYTE(v46) = 5;
  if ( !v41 )
  {
LABEL_44:
    sub_44E290(v39);
    return (char)v11;
  }
  v42 = 0;
  sub_453A20(v41);
  sub_44E290(v39);
  return (char)v11;
}
// 4B70EC: using guessed type int dword_4B70EC;
