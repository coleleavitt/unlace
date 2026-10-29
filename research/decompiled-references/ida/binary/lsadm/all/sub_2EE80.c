__int64 __fastcall sub_2EE80(__int64 a1, char a2)
{
  int v2; // r13d
  int v4; // r12d
  const char *v5; // r14
  __int64 v6; // r15
  int v7; // eax
  int *v8; // rdx
  unsigned __int64 v9; // rax
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rdi
  unsigned __int64 v15; // r12
  _BYTE *v16; // rax
  __int64 v17; // r13
  void *v18; // rdi
  unsigned __int64 v19; // rdx
  char *v20; // r12
  char *v21; // rbp
  char *v22; // rax
  int v23; // eax
  int v24; // ecx
  const char *v25; // rdx
  int v26; // [rsp+0h] [rbp-C8h]
  int *v27; // [rsp+8h] [rbp-C0h]
  void *ptr; // [rsp+10h] [rbp-B8h] BYREF
  int v29[4]; // [rsp+18h] [rbp-B0h]
  int v30[4]; // [rsp+30h] [rbp-98h] BYREF
  int v31[4]; // [rsp+40h] [rbp-88h]
  int v32[4]; // [rsp+50h] [rbp-78h]
  __int64 v33[2]; // [rsp+60h] [rbp-68h]
  int v34[4]; // [rsp+70h] [rbp-58h]
  int v35[2]; // [rsp+88h] [rbp-40h]

  *(_QWORD *)v35 = __readfsqword(0x28u);
  v2 = *(_DWORD *)(a1 + 5712);
  if ( v2 != -1 )
  {
    if ( !byte_7BCA0 )
      sub_2A3D0(2718);
    BUG();
  }
  v4 = 2;
  *(_OWORD *)v30 = 0;
  v5 = (const char *)(a1 + 1032);
  *(_OWORD *)v31 = 0;
  *(_OWORD *)v32 = 0;
  *(_OWORD *)v33 = 0;
  *(_OWORD *)v34 = 0;
  if ( !a2 )
  {
    v2 = 0;
    v4 = sub_29870((char *)(a1 + 1032), (__int64)v30);
    if ( v4 )
    {
      v4 = 0;
    }
    else if ( *(_QWORD *)&v32[2] == *(_QWORD *)(a1 + 5696) && *(_QWORD *)v34 == *(_QWORD *)(a1 + 5704) )
    {
      return 1;
    }
  }
  v6 = 2066;
  v26 = time(nullptr) + 15;
  while ( 1 )
  {
    v7 = sub_29730((__int64)v5, v4, v2);
    *(_DWORD *)(a1 + 5712) = v7;
    if ( v7 != -1 )
      break;
    v8 = __errno_location();
    v9 = (unsigned int)*v8;
    if ( (_DWORD)v9 == 2 )
    {
      v27 = v8;
      if ( !a2 )
        return 1;
      v11 = sub_29830(v5, 0x1A4u);
      *(_DWORD *)(a1 + 5712) = v11;
      if ( v11 != -1 )
      {
        *(_BYTE *)(a1 + 5640) = 1;
        return 1;
      }
      v9 = (unsigned int)*v27;
    }
    if ( (unsigned int)v9 <= 0xB )
    {
      if ( _bittest64(&v6, v9) )
      {
        sub_2A5B0(1);
        if ( time(nullptr) <= v26 )
          continue;
      }
    }
    if ( *(_DWORD *)(a1 + 5712) == -1 )
    {
      v25 = sub_2AEC0(-1);
      sub_B230((__int64)"%s: %s", v5, v25);
    }
    return 1;
  }
  if ( a2 )
  {
    v23 = sub_29A60(v7, (__int64)v30);
    v13 = *(_QWORD *)v34;
    v24 = v23;
    v12 = *(_QWORD *)&v32[2];
    if ( !v24 && *(_QWORD *)(a1 + 5696) == *(_QWORD *)&v32[2] && *(_QWORD *)(a1 + 5704) == *(_QWORD *)v34 )
      return 1;
  }
  else
  {
    v12 = *(_QWORD *)&v32[2];
    v13 = *(_QWORD *)v34;
  }
  *(_QWORD *)(a1 + 5696) = v12;
  v14 = *(_QWORD **)(a1 + 5664);
  *(_QWORD *)(a1 + 5704) = v13;
  sub_2C450(v14);
  *(_QWORD *)(a1 + 5664) = 0;
  LODWORD(v14) = *(_DWORD *)(a1 + 5712);
  *(_QWORD *)(a1 + 5672) = a1 + 5656;
  *(_QWORD *)(a1 + 5680) = a1 + 5656;
  *(_QWORD *)(a1 + 5688) = 0;
  v15 = sub_29BB0((int)v14);
  if ( v15 <= 7 )
  {
    sub_29700(*(_DWORD *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
    goto LABEL_42;
  }
  v16 = nullptr;
  ptr = nullptr;
  *(_OWORD *)v29 = 0;
  if ( v15 != -1 )
  {
    ptr = sub_29E60((__int64)&ptr, nullptr, v15 + 1, 1u);
    memset((char *)ptr + *(_QWORD *)v29, 0, v15 + 1 - *(_QWORD *)v29);
    *(_QWORD *)v29 = v15 + 1;
    v16 = ptr;
  }
  v16[v15] = 0;
  v17 = (int)sub_295D0(*(_DWORD *)(a1 + 5712), ptr, v15);
  if ( !a2 )
  {
    sub_29700(*(_DWORD *)(a1 + 5712));
    *(_DWORD *)(a1 + 5712) = -1;
  }
  v18 = ptr;
  if ( *(_DWORD *)ptr != 929121385 || v15 != v17 )
    goto LABEL_44;
  v19 = v15 - 8;
  v20 = (char *)ptr + 4;
  v21 = (char *)ptr + v19 + 4;
  if ( (unsigned int)sub_2F550(929121385, (char *)ptr + 4, v19) != *(_DWORD *)v21 )
  {
    v18 = ptr;
    goto LABEL_44;
  }
  v22 = sub_2E750((_QWORD *)(a1 + 5648), v20, v21);
  v18 = ptr;
  if ( !v22 || v21 != v22 )
  {
LABEL_44:
    if ( v18 )
    {
      *(_QWORD *)v29 = 0;
      j__free(v18);
    }
LABEL_42:
    sub_B230((__int64)"%s: corrupted registry file, please delete it", v5);
  }
  if ( ptr )
  {
    *(_QWORD *)v29 = 0;
    j__free(ptr);
  }
  return 1;
}

