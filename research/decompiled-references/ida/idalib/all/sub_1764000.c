__int64 __fastcall sub_1764000(__int64 *a1, _DWORD *a2)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rbp
  unsigned __int16 **v5; // r15
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  int v12; // esi
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rbx
  unsigned __int64 v18; // [rsp+8h] [rbp-E0h]
  _DWORD v19[3]; // [rsp+14h] [rbp-D4h] BYREF
  void *ptr; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+28h] [rbp-C0h]
  _BYTE v22[184]; // [rsp+30h] [rbp-B8h] BYREF

  v3 = (unsigned int)a2[4];
  v21 = 0x1000000000LL;
  ptr = v22;
  if ( v3 > 0x10 )
  {
    sub_2237220(&ptr, v22, v3, 8);
    v3 = (unsigned int)a2[4];
  }
  v4 = (__int64)&a2[2 * v3 + 20];
  v5 = (unsigned __int16 **)(a2 + 20);
  if ( (_DWORD *)v4 == a2 + 20 )
  {
    v7 = (unsigned int)v21;
LABEL_11:
    v12 = *a2;
    v13 = a2[3];
    v19[2] = a2[1];
    v14 = *a1;
    v19[0] = v12;
    v15 = *(_QWORD *)(v14 + 760);
    v19[1] = v13;
    v16 = sub_1B5BEF0(v15, ptr, v7, v19);
  }
  else
  {
    while ( 1 )
    {
      v8 = sub_175B800(a1, *v5);
      if ( v8 == 1 )
        break;
      v9 = (unsigned int)v21;
      v10 = v8 & 0xFFFFFFFFFFFFFFFELL;
      v11 = (unsigned int)v21 + 1LL;
      if ( v11 <= HIDWORD(v21) )
      {
        v6 = ptr;
      }
      else
      {
        v18 = v10;
        sub_2237220(&ptr, v22, v11, 8);
        v9 = (unsigned int)v21;
        v6 = ptr;
        v10 = v18;
      }
      v6[v9] = v10;
      ++v5;
      v7 = (unsigned int)(v21 + 1);
      LODWORD(v21) = v21 + 1;
      if ( (unsigned __int16 **)v4 == v5 )
        goto LABEL_11;
    }
    v16 = 0;
  }
  if ( ptr != v22 )
    free(ptr);
  return v16;
}
