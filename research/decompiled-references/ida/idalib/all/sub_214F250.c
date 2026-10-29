__int64 __fastcall sub_214F250(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD **v4; // rdi
  unsigned int v5; // r8d
  unsigned int v6; // r14d
  _BYTE *v7; // r14
  void **v8; // rdx
  unsigned __int64 v9; // rsi
  char *v10; // r13
  _BYTE *v11; // rax
  char *v12; // rsi
  signed __int64 v13; // r15
  char *v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  int *v17; // rax
  int v18; // eax
  void **v19; // rbp
  __int64 v20; // rbx
  void **v21; // rbx
  __int64 v23; // rdi
  void (*v24)(); // rax
  void *v27[2]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v28[16]; // [rsp+30h] [rbp-138h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-128h] BYREF
  __int64 v30; // [rsp+50h] [rbp-118h]
  __int64 v31; // [rsp+58h] [rbp-110h]
  __int16 v32; // [rsp+60h] [rbp-108h]
  _QWORD v33[2]; // [rsp+70h] [rbp-F8h] BYREF
  char *v34; // [rsp+80h] [rbp-E8h]
  __int16 v35; // [rsp+90h] [rbp-D8h]
  void *ptr; // [rsp+A0h] [rbp-C8h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-C0h]
  _BYTE v38[184]; // [rsp+B0h] [rbp-B8h] BYREF

  v4 = *(_DWORD ***)(a1 + 8);
  ptr = v38;
  v37 = 0x400000000LL;
  if ( *v4[6] == 3 )
  {
    while ( 1 )
    {
      v27[0] = v28;
      v27[1] = nullptr;
      v28[0] = 0;
      v6 = (*((__int64 (__fastcall **)(_DWORD **, void **))*v4 + 22))(v4, v27);
      if ( (_BYTE)v6 )
        goto LABEL_35;
      v7 = ptr;
      v8 = v27;
      v9 = (unsigned int)v37 + 1LL;
      v10 = (char *)ptr + 32 * (unsigned int)v37;
      if ( v9 > HIDWORD(v37) )
      {
        if ( ptr > v27 || v10 <= (char *)v27 )
        {
          sub_A8C1F0((__int64)&ptr, v9);
          v8 = v27;
          v10 = (char *)ptr + 32 * (unsigned int)v37;
        }
        else
        {
          sub_A8C1F0((__int64)&ptr, v9);
          v8 = (void **)((char *)ptr + (char *)v27 - v7);
          v10 = (char *)ptr + 32 * (unsigned int)v37;
        }
      }
      v11 = v10 + 16;
      *(_QWORD *)v10 = v10 + 16;
      v12 = (char *)*v8;
      v13 = (signed __int64)v8[1];
      v14 = (char *)*v8 + v13;
      LOBYTE(v5) = *v8 == nullptr && v14 != nullptr;
      v6 = v5;
      if ( (_BYTE)v5 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v13 > 0xF )
        break;
      if ( v13 == 1 )
      {
        v10[16] = *v12;
        goto LABEL_8;
      }
      if ( v13 )
        goto LABEL_27;
LABEL_8:
      *((_QWORD *)v10 + 1) = v13;
      v11[v13] = 0;
      v15 = *(_QWORD **)(a1 + 8);
      v16 = (unsigned int)(v37 + 1);
      v17 = (int *)v15[6];
      LODWORD(v37) = v37 + 1;
      v18 = *v17;
      if ( v18 == 9 )
      {
        if ( v27[0] != v28 )
        {
          operator delete(v27[0]);
          v15 = *(_QWORD **)(a1 + 8);
          LODWORD(v16) = v37;
        }
        v23 = v15[3];
        v20 = (unsigned int)v16;
        v19 = (void **)ptr;
        v24 = *(void (**)())(*(_QWORD *)v23 + 232LL);
        if ( v24 != nullsub_1404 )
        {
          ((void (__fastcall *)(__int64, void *, _QWORD, char *))v24)(v23, ptr, (unsigned int)v16, v14);
          v19 = (void **)ptr;
          v20 = (unsigned int)v37;
        }
        goto LABEL_14;
      }
      if ( v18 != 26 )
      {
        v29[0] = "unexpected token in '";
        v35 = 770;
        v30 = a2;
        v31 = a3;
        v32 = 1283;
        v33[0] = v29;
        v34 = "' directive";
        v6 = sub_21543E0(v15, v33, 0, 0);
LABEL_35:
        if ( v27[0] != v28 )
          operator delete(v27[0]);
        goto LABEL_13;
      }
      (*(void (__fastcall **)(_QWORD *, char *, __int64, char *))(*v15 + 152LL))(v15, v12, v16, v14);
      if ( v27[0] == v28 )
      {
        v4 = *(_DWORD ***)(a1 + 8);
        if ( *v4[6] != 3 )
          goto LABEL_12;
      }
      else
      {
        operator delete(v27[0]);
        v4 = *(_DWORD ***)(a1 + 8);
        if ( *v4[6] != 3 )
          goto LABEL_12;
      }
    }
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v11 = (_BYTE *)operator new(v13 + 1);
    *((_QWORD *)v10 + 2) = v13;
    *(_QWORD *)v10 = v11;
LABEL_27:
    memcpy(v11, v12, v13);
    v11 = *(_BYTE **)v10;
    goto LABEL_8;
  }
LABEL_12:
  v29[0] = "expected string in '";
  v32 = 1283;
  v30 = a2;
  v35 = 770;
  v31 = a3;
  v33[0] = v29;
  v34 = "' directive";
  v6 = sub_21543E0(v4, v33, 0, 0);
LABEL_13:
  v19 = (void **)ptr;
  v20 = (unsigned int)v37;
LABEL_14:
  v21 = &v19[4 * v20];
  if ( v21 != v19 )
  {
    do
    {
      while ( 1 )
      {
        v21 -= 4;
        if ( *v21 == v21 + 2 )
          break;
        operator delete(*v21);
        if ( v21 == v19 )
          goto LABEL_17;
      }
    }
    while ( v21 != v19 );
LABEL_17:
    v19 = (void **)ptr;
  }
  if ( v19 != (void **)v38 )
    free(v19);
  return v6;
}
