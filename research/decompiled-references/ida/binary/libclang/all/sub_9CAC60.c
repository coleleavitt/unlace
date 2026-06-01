__int64 __fastcall sub_9CAC60(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v16; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v18; // [rsp+28h] [rbp-70h]
  _BYTE v19[104]; // [rsp+30h] [rbp-68h] BYREF

  v18 = 0x600000000LL;
  v4 = *(_DWORD *)(a3 + 36);
  ptr = v19;
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(a1 + 184);
      v7 = *(_QWORD *)sub_A1A5A0(v6, 8);
      sub_A1A5E0(v6, 8);
      v8 = (unsigned int)v18;
      if ( (unsigned int)v18 >= (unsigned __int64)HIDWORD(v18) )
      {
        sub_25D6060(&ptr, v19, (unsigned int)v18 + 1LL, 8);
        v8 = (unsigned int)v18;
      }
      ++v5;
      *((_QWORD *)ptr + v8) = v7;
      v9 = *(unsigned int *)(a3 + 36);
      v10 = (unsigned int)(v18 + 1);
      LODWORD(v18) = v18 + 1;
    }
    while ( v9 != v5 );
    v11 = ptr;
  }
  else
  {
    v10 = 0;
    v11 = v19;
  }
  v12 = sub_98F6A0(a1, a2, a3, (__int64)v11, v10, &v16);
  if ( (_BYTE)v12 )
  {
    v13 = v16;
    v14 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 16);
    *(_DWORD *)(v14 + 8) = 0;
    *(_QWORD *)v14 = v13;
  }
  if ( ptr != v19 )
    free(ptr);
  return v12;
}

