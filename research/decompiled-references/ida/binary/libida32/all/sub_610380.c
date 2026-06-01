__int64 __fastcall sub_610380(int a1, unsigned int a2, char a3, char a4)
{
  unsigned int v6; // eax
  unsigned int v7; // ebp
  char *v9; // r13
  const char **v10; // r14
  int v11; // r15d
  __int64 v12; // rdi
  void *v13; // rsi
  unsigned int v14; // r14d
  unsigned int v15; // r15d
  int v16; // r12d
  int v17; // r13d
  char *v18; // [rsp+0h] [rbp-B8h]
  _DWORD v19[3]; // [rsp+Ch] [rbp-ACh] BYREF
  unsigned int v20; // [rsp+18h] [rbp-A0h] BYREF
  unsigned int v21; // [rsp+1Ch] [rbp-9Ch] BYREF
  char *s1; // [rsp+20h] [rbp-98h] BYREF
  __int128 v23; // [rsp+28h] [rbp-90h]
  void *ptr; // [rsp+40h] [rbp-78h] BYREF
  __int128 v25; // [rsp+48h] [rbp-70h]
  _BYTE v26[24]; // [rsp+60h] [rbp-58h] BYREF
  unsigned __int64 v27; // [rsp+78h] [rbp-40h]

  v19[0] = a1;
  v27 = __readfsqword(0x28u);
  v6 = netnode_exist(v19);
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v6;
  v20 = v19[0];
  v21 = a2;
  s1 = nullptr;
  v23 = 0;
  if ( netnode_qsupstr(v19[0], &s1, 2, 65) <= 0 )
  {
    if ( (unsigned __int8)netnode_exist(&v21) && (unsigned int)netnode_supval(v20, 0xFFFFFFFFLL, v26, 17, 83) == 16 )
    {
      netnode_supset(v21, 0xFFFFFFFFLL, v26, 16, 83);
      netnode_kill((int)&v20);
      if ( s1 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(s1);
      }
    }
    else
    {
LABEL_10:
      ptr = nullptr;
      v25 = 0;
      if ( netnode_get_name(v20, &ptr) < 0 )
      {
        v13 = ptr;
        if ( *((_QWORD *)&v25 + 1) <= 0xCu )
        {
          ptr = (void *)qvector_reserve(&ptr, ptr, 13, 1);
          v13 = ptr;
        }
        *(_QWORD *)&v25 = 13;
        qmemcpy(v13, "UNNAMED NODE", 12);
        *((_BYTE *)ptr + 12) = 0;
      }
      if ( (a4 & 1) == 0 )
      {
        node2ea(v20);
        sub_365330();
      }
      if ( ptr )
      {
        *(_QWORD *)&v25 = 0;
        qfree(ptr);
      }
      if ( s1 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(s1);
        v12 = v19[0];
LABEL_17:
        LODWORD(ptr) = 0;
        netnode_supset(v12, 0, &ptr, 4, 65);
        LODWORD(ptr) = 0;
        netnode_supset(v19[0], 1, &ptr, 4, 65);
        return 0;
      }
    }
    v12 = v19[0];
    goto LABEL_17;
  }
  v9 = (char *)haystack;
  v10 = (const char **)&off_2B0CC20;
  v18 = s1;
  if ( (_QWORD)v23 )
    v9 = s1;
  v11 = 0;
  while ( strcmp(v9, *v10) )
  {
    ++v11;
    v10 += 2;
    if ( v11 == 4 )
      goto LABEL_10;
  }
  v14 = (unsigned int)(&off_2B0CC20)[2 * v11 + 1];
  if ( v18 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v18);
  }
  v12 = v19[0];
  if ( !v14 )
    goto LABEL_17;
  v15 = 0;
  v16 = a4 & 2;
  v17 = netnode_altval(v19[0], 1, 65);
  if ( v17 )
  {
    do
    {
      if ( !(unsigned __int8)sub_60FC60(v19[0], v15, a3, v14) )
      {
        if ( !v16 )
        {
          node2ea(v19[0]);
          sub_365330();
        }
        node2ea(v19[0]);
        sub_365330();
      }
      ++v15;
    }
    while ( v15 != v17 );
  }
  return v7;
}

