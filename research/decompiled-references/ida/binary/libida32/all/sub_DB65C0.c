__int64 __fastcall sub_DB65C0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r8
  _BYTE *v10; // rcx
  unsigned int v11; // ebx
  char v12; // bp
  __int64 v14; // [rsp+18h] [rbp-80h] BYREF
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v16; // [rsp+28h] [rbp-70h]
  _BYTE v17[104]; // [rsp+30h] [rbp-68h] BYREF

  v16 = 0x600000000LL;
  v4 = *(_DWORD *)(a3 + 36);
  ptr = v17;
  if ( v4 )
  {
    v5 = 0;
    do
    {
      v6 = *(_QWORD *)(a1 + 176);
      v7 = *(_QWORD *)sub_DFDA20(v6, 8);
      sub_DFDA50(v6, 8);
      v8 = (unsigned int)v16;
      if ( (unsigned int)v16 >= (unsigned __int64)HIDWORD(v16) )
      {
        if ( HIDWORD(v16) < (unsigned __int64)(unsigned int)v16 + 1 )
        {
          sub_22134E0(&ptr, v17, (unsigned int)v16 + 1LL, 8);
          v8 = (unsigned int)v16;
        }
        *((_QWORD *)ptr + v8) = v7;
        v9 = (unsigned int)(v16 + 1);
        LODWORD(v16) = v16 + 1;
      }
      else
      {
        v9 = (unsigned int)(v16 + 1);
        *((_QWORD *)ptr + (unsigned int)v16) = v7;
        LODWORD(v16) = v9;
      }
      ++v5;
    }
    while ( *(_DWORD *)(a3 + 36) != v5 );
    v10 = ptr;
  }
  else
  {
    v9 = 0;
    v10 = v17;
  }
  v11 = sub_D789B0(a1, a2, a3, (__int64)v10, v9, &v14);
  if ( (_BYTE)v11 )
  {
    v12 = v14;
    *(_BYTE *)sub_DFD980(*(_QWORD *)(a1 + 176), 8) = v12;
  }
  if ( ptr != v17 )
    free(ptr);
  return v11;
}

