_QWORD *__fastcall sub_9BC800(__int64 a1, __int64 a2, int a3, _QWORD *a4, _QWORD *a5, _BYTE *a6)
{
  _QWORD *v8; // rbx
  __int64 v9; // r13
  unsigned int v10; // eax
  void *v12; // rdi
  bool v13; // al
  __int64 v14; // [rsp+0h] [rbp-58h]
  _QWORD *v16; // [rsp+10h] [rbp-48h]

  *a6 = 0;
  if ( a5 != a4 )
  {
    v16 = a5;
    v14 = a2 + 88;
    v8 = a4;
    while ( 1 )
    {
      v9 = *v8;
      if ( a2 == *v8 || (*(_BYTE *)(v9 + 152) & 3) != a3 )
        goto LABEL_3;
      *a6 = 1;
      if ( (*(_BYTE *)(a2 + 108) & 1) != 0
        || *(_DWORD *)(a2 + 104) != 1
        || (*(_BYTE *)(v9 + 108) & 1) != 0
        || *(_DWORD *)(v9 + 104) != 1 )
      {
        LOBYTE(v10) = sub_1848D40(qword_1C7F2C0, v14, v9 + 88);
      }
      else if ( (*(_BYTE *)(a2 + 92) & 1) != 0 || (*(_BYTE *)(v9 + 92) & 1) != 0 )
      {
        v10 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v9 + 88) >> 31;
      }
      else
      {
        LOBYTE(v10) = *(_DWORD *)(a2 + 88) < *(_DWORD *)(v9 + 88);
      }
      if ( (_BYTE)v10 )
        return v16;
      v12 = qword_1C7F2C0;
      if ( (*(_BYTE *)(a2 + 92) & 1) != 0 || (*(_BYTE *)(v9 + 92) & 1) != 0 )
      {
        v12 = qword_1C7F2C0;
        if ( !(unsigned int)sub_182C7B0(qword_1C7F2C0, v14, v9 + 88) )
        {
LABEL_14:
          if ( (*(_BYTE *)(a2 + 108) & 1) != 0 || (*(_BYTE *)(v9 + 108) & 1) != 0 )
            v13 = (unsigned int)sub_182C7B0(v12, a2 + 104, v9 + 104) == 0;
          else
            v13 = *(_DWORD *)(a2 + 104) == *(_DWORD *)(v9 + 104);
          if ( v13 && sub_3ED700((__int64)qword_1C7F2C0, a2 + 120, v9 + 120) )
            return v16;
        }
      }
      else if ( *(_DWORD *)(a2 + 88) == *(_DWORD *)(v9 + 88) )
      {
        goto LABEL_14;
      }
      v16 = v8;
LABEL_3:
      if ( a5 == ++v8 )
        return v16;
    }
  }
  return a5;
}

