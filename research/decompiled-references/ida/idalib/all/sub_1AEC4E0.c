unsigned __int64 __fastcall sub_1AEC4E0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // r8
  __int64 *v6; // rbx
  __int64 v7; // rbp
  __int64 v8; // rcx
  signed __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int64 result; // rax
  __int64 *v12; // [rsp+0h] [rbp-98h]
  unsigned __int64 v13; // [rsp+0h] [rbp-98h]
  __int64 *v14; // [rsp+0h] [rbp-98h]
  __int64 *v15; // [rsp+0h] [rbp-98h]
  int v16; // [rsp+8h] [rbp-90h]
  _QWORD *v17; // [rsp+8h] [rbp-90h]
  __int64 v18; // [rsp+8h] [rbp-90h]
  _QWORD *v19; // [rsp+10h] [rbp-88h]
  __int64 v20; // [rsp+10h] [rbp-88h]
  _QWORD *v21; // [rsp+18h] [rbp-80h]
  void *ptr; // [rsp+20h] [rbp-78h] BYREF
  __int64 v23; // [rsp+28h] [rbp-70h]
  _BYTE v24[104]; // [rsp+30h] [rbp-68h] BYREF

  if ( !a3 )
    return 0;
  v3 = &a2[a3];
  v6 = a2;
  v23 = 0x600000000LL;
  for ( ptr = v24; v3 != v6; ++v6 )
  {
    v7 = *v6;
    if ( *v6 )
    {
      v8 = (unsigned int)v23;
      if ( (*(_WORD *)v7 & 0x1FF) == 0xF9 )
      {
        v9 = 8LL * *(unsigned int *)(v7 + 4);
        v10 = v9 >> 3;
        if ( HIDWORD(v23) < (unsigned __int64)(unsigned int)v23 + (v9 >> 3) )
        {
          v21 = a1;
          v20 = (8LL * *(unsigned int *)(v7 + 4)) >> 3;
          v18 = 8LL * *(unsigned int *)(v7 + 4);
          v15 = v3;
          sub_2237220(&ptr, v24, (unsigned int)v23 + v10, 8);
          v8 = (unsigned int)v23;
          a1 = v21;
          LODWORD(v10) = v20;
          v9 = v18;
          v3 = v15;
        }
        if ( v7 + 16 != v7 + v9 + 16 )
        {
          v19 = a1;
          v16 = v10;
          v12 = v3;
          memcpy((char *)ptr + 8 * v8, (const void *)(v7 + 16), v9);
          LODWORD(v8) = v23;
          a1 = v19;
          LODWORD(v10) = v16;
          v3 = v12;
        }
        LODWORD(v23) = v10 + v8;
      }
      else
      {
        if ( HIDWORD(v23) < (unsigned __int64)(unsigned int)v23 + 1 )
        {
          v17 = a1;
          v14 = v3;
          sub_2237220(&ptr, v24, (unsigned int)v23 + 1LL, 8);
          v8 = (unsigned int)v23;
          a1 = v17;
          v3 = v14;
        }
        *((_QWORD *)ptr + v8) = v7;
        LODWORD(v23) = v23 + 1;
      }
    }
  }
  result = sub_EEF560(a1, a2, a3, 0, 0, 0);
  if ( ptr != v24 )
  {
    v13 = result;
    free(ptr);
    return v13;
  }
  return result;
}
