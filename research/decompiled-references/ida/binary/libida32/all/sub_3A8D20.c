__int64 __fastcall sub_3A8D20(__int64 a1, __int64 **a2)
{
  __int64 **v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  size_t v12; // rax
  int v13; // r14d
  int v14; // r13d
  __int64 v15; // rax
  size_t v16; // r15
  __int64 v17; // rdx
  size_t v18; // rax
  int *v19; // rsi
  int v20; // edx
  __int64 v21; // rax
  size_t v22; // rax
  __int64 *v23; // rbx
  unsigned int v24; // esi
  __int64 i; // rbp
  unsigned int v26; // eax
  const char *v28; // [rsp+0h] [rbp-A8h]
  __int64 v29; // [rsp+10h] [rbp-98h]
  unsigned __int8 v30; // [rsp+1Fh] [rbp-89h]
  void *v31; // [rsp+20h] [rbp-88h] BYREF
  __int128 v32; // [rsp+28h] [rbp-80h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int128 v34; // [rsp+48h] [rbp-60h]
  _BYTE v35[5]; // [rsp+63h] [rbp-45h] BYREF
  _QWORD v36[8]; // [rsp+68h] [rbp-40h] BYREF

  v2 = a2;
  v36[0] = __readfsqword(0x28u);
  if ( !a2 )
    v2 = *(__int64 ***)(qword_2CA1698 + 1384);
  v30 = netnode_inited();
  if ( v30 )
  {
    if ( !v2[1] )
    {
      netnode_check(&ptr, "$ bpts", 0, 0);
      netnode_kill((int)&ptr);
      return v30;
    }
    v32 = 0;
    v31 = nullptr;
    v31 = (void *)qvector_reserve(&v31, 0, 1, 1);
    *((_BYTE *)v31 + v32) = 5;
    ptr = nullptr;
    v34 = 0;
    *(_QWORD *)&v32 = v32 + 1;
    v3 = *(_QWORD *)(*(_QWORD *)(qword_2CA1698 + 1384) + 224LL);
    v29 = *(_QWORD *)(qword_2CA1698 + 1384);
    if ( v3 )
    {
      ptr = (void *)qvector_reserve(&ptr, 0, v3, 4);
      v4 = v34;
      if ( (unsigned __int64)v34 >= v3 || (*((_DWORD *)ptr + v34) = 0, v5 = v4 + 1, v5 >= v3) )
      {
        *(_QWORD *)&v34 = v3;
        v6 = *v2;
        v7 = (__int64)&(*v2)[(_QWORD)v2[1]];
        if ( *v2 == (__int64 *)v7 )
          goto LABEL_15;
      }
      else
      {
        do
          *((_DWORD *)ptr + v5++) = 0;
        while ( v3 != v5 );
        *(_QWORD *)&v34 = v3;
        v6 = *v2;
        v7 = (__int64)&(*v2)[(_QWORD)v2[1]];
        if ( *v2 == (__int64 *)v7 )
          goto LABEL_16;
      }
    }
    else
    {
      v6 = *v2;
      v7 = (__int64)&(*v2)[(_QWORD)v2[1]];
      if ( (__int64 *)v7 == *v2 )
        goto LABEL_45;
    }
    do
    {
      if ( *(_DWORD *)(*v6 + 40) )
      {
        v8 = *(unsigned int *)(*v6 + 36);
        if ( (_DWORD)v8 )
        {
          if ( v8 < v3 )
          {
            *((_DWORD *)ptr + v8) = 1;
            v3 = v34;
          }
        }
      }
      ++v6;
    }
    while ( v6 != (__int64 *)v7 );
LABEL_15:
    if ( v3 > 1 )
    {
LABEL_16:
      v9 = 1;
      LODWORD(v10) = 0;
      v11 = 1;
      do
      {
        ++v9;
        v10 = (unsigned int)(*((_DWORD *)ptr + v11) + v10);
        v11 = v9;
      }
      while ( v9 < v3 );
LABEL_18:
      v12 = pack_dd(v35, v36, v10) - (_QWORD)v35;
      if ( v12 )
        sub_3A5FB0((__int64 *)&v31, v35, v12);
      v13 = 0;
      v14 = 1;
      v15 = 1;
      if ( (unsigned __int64)v34 <= 1 )
      {
LABEL_34:
        v22 = pack_dd(v35, v36, *((unsigned int *)v2 + 2)) - (_QWORD)v35;
        if ( v22 )
          sub_3A5FB0((__int64 *)&v31, v35, v22);
        v23 = *v2;
        v24 = 0;
        for ( i = (__int64)&(*v2)[(_QWORD)v2[1]]; (__int64 *)i != v23; v24 = v26 )
          v26 = sub_3A87B0((__int64 *)&v31, v24, *v23++, &ptr);
        if ( ptr )
        {
          *(_QWORD *)&v34 = 0;
          qfree(ptr);
        }
        netnode_check(&ptr, "$ bpts", 0, 1);
        netnode_setblob((unsigned int)ptr, v31, v32, 0, 83);
        if ( v31 )
        {
          *(_QWORD *)&v32 = 0;
          qfree(v31);
        }
        return v30;
      }
      while ( 1 )
      {
        v19 = (int *)((char *)ptr + 4 * v15);
        v20 = *v19;
        v13 += *v19;
        *v19 = v13;
        if ( v20 )
          break;
LABEL_29:
        v15 = ++v14;
        if ( v14 >= (unsigned __int64)v34 )
          goto LABEL_34;
      }
      v21 = *(_QWORD *)(v29 + 216) + 24 * v15;
      v16 = *(_QWORD *)(v21 + 8);
      if ( v16 )
      {
        v28 = *(const char **)v21;
        if ( !*(_QWORD *)v21 )
        {
          v17 = 0;
          v16 = 0;
          v28 = &byte_22CD811;
          goto LABEL_25;
        }
        v16 = strlen(*(const char **)v21);
        if ( v16 > 0xFFFFFFFF )
        {
          if ( !under_debugger )
            interr(4);
          BUG();
        }
      }
      else
      {
        v17 = 0;
        v28 = &byte_22CD811;
        if ( !haystack )
          goto LABEL_25;
        v28 = haystack;
      }
      v17 = (unsigned int)v16;
LABEL_25:
      v18 = pack_dd(v35, v36, v17) - (_QWORD)v35;
      if ( v18 )
        sub_3A5FB0((__int64 *)&v31, v35, v18);
      if ( v16 )
        sub_3A5FB0((__int64 *)&v31, v28, v16);
      goto LABEL_29;
    }
LABEL_45:
    v10 = 0;
    goto LABEL_18;
  }
  return v30;
}

