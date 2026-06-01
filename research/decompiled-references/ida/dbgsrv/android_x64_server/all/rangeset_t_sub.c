/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_sub
// Address: 0x00000000000C9720

//----- (00000000000C9720) ----------------------------------------------------
__int64 __fastcall rangeset_t_sub(__int64 a1, unsigned __int64 *a2)
{
  int v4; // eax
  char v5; // al
  char *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // rdi
  int i; // ebp
  unsigned __int64 v16; // rcx
  char *v17; // rdx
  char *v18; // rsi
  void *v19; // r15
  const void *v20; // r13
  void *ptr[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+10h] [rbp-68h]
  int v23; // [rsp+18h] [rbp-60h]
  char v24; // [rsp+1Ch] [rbp-5Ch]
  __int128 v25; // [rsp+20h] [rbp-58h] BYREF
  char v26; // [rsp+30h] [rbp-48h]
  unsigned __int64 v27; // [rsp+40h] [rbp-38h]

  v27 = __readfsqword(0x28u);
  if ( *a2 >= a2[1] )
  {
    LODWORD(v6) = 0;
  }
  else
  {
    v4 = *(_DWORD *)(a1 + 32);
    *(_OWORD *)ptr = 0;
    v22 = 0;
    v23 = v4;
    if ( v4 == -1 )
      v5 = 0;
    else
      v5 = must_journal();
    v24 = v5;
    v7 = *(_QWORD *)(a1 + 8);
    if ( !v7 )
      goto LABEL_19;
    v6 = *(char **)a1;
    v8 = *a2;
    v9 = 0;
    while ( 1 )
    {
      v10 = *((_QWORD *)v6 + 1);
      if ( v10 > v8 )
        break;
      ++v9;
      v6 += 16;
      if ( v9 >= v7 )
        goto LABEL_19;
    }
    v11 = a2[1];
    if ( *(_QWORD *)v6 < v11 )
    {
      if ( *(_QWORD *)v6 >= v8 )
      {
        if ( v10 <= v11 )
        {
          LODWORD(v9) = v9 - 1;
        }
        else
        {
          if ( v5 )
          {
            v25 = *(_OWORD *)v6;
            v26 = 1;
            sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
            v11 = a2[1];
          }
          *(_QWORD *)v6 = v11;
          if ( v24 )
          {
            v25 = *(_OWORD *)v6;
            v26 = 0;
            sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
          }
        }
      }
      else
      {
        if ( v5 )
        {
          v25 = *(_OWORD *)v6;
          v26 = 1;
          sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
          v8 = *a2;
        }
        *((_QWORD *)v6 + 1) = v8;
        if ( v24 )
        {
          v25 = *(_OWORD *)v6;
          v26 = 0;
          sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
        }
        if ( a2[1] < v10 )
        {
          *(_QWORD *)&v25 = a2[1];
          *((_QWORD *)&v25 + 1) = v10;
          sub_C9120((char **)a1, (unsigned __int64 *)&v25, (__int64)ptr);
          LODWORD(v9) = v9 + 1;
        }
      }
      v13 = (int)v9 + 1;
      v14 = *(_QWORD *)(a1 + 8);
      for ( i = v9; v14 > v13; ++i )
      {
        v16 = a2[1];
        v17 = *(char **)a1;
        v6 = (char *)(16 * v13);
        if ( v16 <= *(_QWORD *)(*(_QWORD *)a1 + 16 * v13) )
          break;
        v18 = &v6[(_QWORD)v17];
        if ( v16 < *(_QWORD *)&v6[(_QWORD)v17 + 8] )
        {
          if ( v24 )
          {
            v25 = *(_OWORD *)v18;
            v26 = 1;
            sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
            v16 = a2[1];
            v17 = *(char **)a1;
          }
          *(_QWORD *)&v17[16 * v13] = v16;
          if ( v24 )
          {
            v25 = *(_OWORD *)(*(_QWORD *)a1 + 16 * v13);
            v26 = 0;
            sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
          }
          break;
        }
        if ( v24 )
        {
          v25 = *(_OWORD *)v18;
          v26 = 1;
          sub_CAFE0((unsigned __int64 *)ptr, (unsigned __int64)&v25);
          v14 = *(_QWORD *)(a1 + 8);
        }
        v13 = i + 2;
      }
      if ( (_DWORD)v9 != i )
      {
        v19 = (void *)(*(_QWORD *)a1 + 16LL * (int)v9 + 16);
        v20 = (const void *)(*(_QWORD *)a1 + 16 * v13);
        memmove(v19, v20, *(_QWORD *)a1 + 16LL * *(_QWORD *)(a1 + 8) - (_QWORD)v20);
        *(_QWORD *)(a1 + 8) -= ((_BYTE *)v20 - (_BYTE *)v19) >> 4;
      }
      *(_QWORD *)(a1 + 24) = 0;
      LOBYTE(v6) = 1;
      sub_C9640((__int64)ptr);
    }
    else
    {
LABEL_19:
      LODWORD(v6) = 0;
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v22 = 0;
    }
  }
  return (unsigned int)v6;
}
