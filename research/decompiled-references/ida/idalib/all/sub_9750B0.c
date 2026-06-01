__int64 __fastcall sub_9750B0(__int64 a1, _DWORD *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rbx
  void *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // r9
  unsigned __int8 v11; // al
  unsigned __int64 v12; // rcx
  char v13; // si
  int v14; // edi
  char v15; // si
  Elf64_Rela *v16; // rdx
  unsigned __int8 v17; // si
  unsigned __int64 v18; // rdi
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rsi
  int dest; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v23; // [rsp+8h] [rbp-20h]

  v23 = __readfsqword(0x28u);
  v4 = a4 == 0 ? 5LL : 1LL;
  if ( !a3 )
    return v4;
  if ( !a2 )
    return -1;
  if ( a3 >= v4 )
  {
    *(_OWORD *)a1 = 0;
    *(_OWORD *)(a1 + 16) = 0;
    *(_OWORD *)(a1 + 32) = 0;
    if ( a4 != 1 && *a2 != -47205080 )
    {
      v4 = -10;
      if ( (*a2 & 0xFFFFFFF0) == 0x184D2A50 )
      {
        v4 = 8;
        if ( a3 > 7 )
        {
          v20 = (unsigned int)a2[1];
          v4 = 0;
          *(_DWORD *)(a1 + 20) = 1;
          *(_QWORD *)a1 = v20;
        }
      }
      return v4;
    }
    v9 = sub_974C30((__int64)a2, a3, a4);
    if ( a3 < v9 )
      return v9;
    *(_DWORD *)(v10 + 24) = v9;
    v11 = *((_BYTE *)a2 + v4 - 1);
    if ( (v11 & 8) != 0 )
      return -14;
    if ( (*((_BYTE *)a2 + v4 - 1) & 0x20) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v17 = *((_BYTE *)a2 + v4);
      v18 = v4 + 1;
      v4 = -16;
      v19 = (v17 >> 3) + 10;
      if ( v19 > 31 )
        return v4;
      v4 = v18;
      v12 = (1LL << v19) + (v17 & 7) * ((unsigned __int64)(1LL << v19) >> 3);
    }
    v13 = v11 & 3;
    if ( (v11 & 3) == 2 )
    {
      v14 = *(unsigned __int16 *)((char *)a2 + v4);
      v4 += 2LL;
    }
    else if ( v13 == 3 )
    {
      v14 = *(_DWORD *)((char *)a2 + v4);
      v4 += 4LL;
    }
    else
    {
      v14 = 0;
      if ( v13 == 1 )
        v14 = *((unsigned __int8 *)a2 + v4++);
    }
    v15 = v11 >> 6;
    if ( v11 >> 6 == 2 )
    {
      v21 = *(unsigned int *)((char *)a2 + v4);
    }
    else
    {
      if ( v15 != 3 )
      {
        if ( v15 == 1 )
        {
          v21 = *(unsigned __int16 *)((char *)a2 + v4) + 256LL;
          if ( (v11 & 0x20) != 0 )
          {
            *(_DWORD *)(v10 + 20) = 0;
            LODWORD(v12) = v21;
            *(_QWORD *)v10 = v21;
            *(_QWORD *)(v10 + 8) = v21;
            goto LABEL_28;
          }
        }
        else
        {
          if ( (v11 & 0x20) != 0 )
          {
            v12 = *((unsigned __int8 *)a2 + v4);
            *(_DWORD *)(v10 + 20) = 0;
            *(_QWORD *)v10 = v12;
            *(_QWORD *)(v10 + 8) = v12;
LABEL_28:
            LODWORD(v16) = v12;
LABEL_29:
            *(_DWORD *)(v10 + 16) = (_DWORD)v16;
            v4 = 0;
            *(_DWORD *)(v10 + 28) = v14;
            *(_DWORD *)(v10 + 32) = (v11 & 4) != 0;
            return v4;
          }
          v21 = -1;
        }
LABEL_36:
        *(_DWORD *)(v10 + 20) = 0;
        v16 = &stru_20000;
        *(_QWORD *)v10 = v21;
        *(_QWORD *)(v10 + 8) = v12;
        if ( v12 > 0x1FFFF )
          goto LABEL_29;
        goto LABEL_28;
      }
      v21 = *(_QWORD *)((char *)a2 + v4);
    }
    if ( (v11 & 0x20) != 0 )
      v12 = v21;
    goto LABEL_36;
  }
  if ( a4 != 1 )
  {
    dest = -47205080;
    v8 = memcpy(&dest, a2, a3);
    if ( dest != -47205080 )
    {
      dest = 407710288;
      memcpy(v8, a2, a3);
      if ( (dest & 0xFFFFFFF0) != 0x184D2A50 )
        return -10;
    }
  }
  return v4;
}
