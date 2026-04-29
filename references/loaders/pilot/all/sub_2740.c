_BYTE *__fastcall sub_2740(char *a1, __int64 *a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // rdx
  char *v6; // r12
  char v8; // al
  unsigned __int64 v9; // rcx
  _BYTE *v10; // r13
  unsigned __int8 v11; // di
  __int64 v12; // rbx
  _BYTE *v13; // rax
  unsigned int v14; // esi
  __int64 v15; // r10
  unsigned __int64 v16; // rbx
  _BYTE *v17; // rdi
  __int64 v18; // rbx
  _BYTE *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // r10
  _BYTE *v25; // rdx
  char v26; // al
  char v27; // al
  char v28; // al
  char v29; // al
  __int64 v30; // rdx
  __int64 v31; // rsi
  char v32; // al
  _BYTE v35[5]; // [rsp+10h] [rbp-148h] BYREF
  char v36; // [rsp+15h] [rbp-143h]
  char v37; // [rsp+16h] [rbp-142h]
  char v38; // [rsp+17h] [rbp-141h]
  unsigned __int64 v39; // [rsp+118h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v5 = *a2;
  if ( *a2 )
  {
    v6 = a1;
    while ( 1 )
    {
      v35[0] = 0;
      v8 = *v6;
      v9 = v5 - 1;
      v10 = v6 + 1;
      *a2 = v5 - 1;
      if ( !v8 )
        return v10;
      if ( v8 < 0 )
      {
        v16 = (unsigned __int8)((v8 & 0x7F) + 1);
        if ( v9 < v16 )
          goto LABEL_16;
        v17 = v6 + 1;
        v6 = &v10[v16];
        mem2base(v17, *a3, v16 + *a3, a4 + v10 - a1);
        *a2 -= v16;
        v18 = *a3 + v16;
        goto LABEL_15;
      }
      if ( (v8 & 0x40) != 0 )
        break;
      if ( (v8 & 0x20) != 0 )
      {
        if ( v5 == 1 )
          goto LABEL_16;
        v11 = v6[1];
        v12 = (v8 & 0x1F) + 2LL;
        v13 = v35;
        if ( (unsigned int)v12 >= 8 )
        {
          LODWORD(v23) = 0;
          do
          {
            v24 = (unsigned int)v23;
            v23 = (unsigned int)(v23 + 8);
            *(_QWORD *)&v35[v24] = 0x101010101010101LL * v11;
          }
          while ( (unsigned int)v23 < ((unsigned int)v12 & 0xFFFFFFF8) );
          v13 = &v35[v23];
        }
        if ( (v12 & 7) != 0 )
        {
          v14 = 0;
          do
          {
            v15 = v14++;
            v13[v15] = v11;
          }
          while ( v14 < ((unsigned __int8)v12 & 7u) );
        }
        v6 += 2;
        *a2 = v5 - 2;
        goto LABEL_29;
      }
      if ( (v8 & 0x10) != 0 )
      {
        v12 = (v8 & 0xF) + 1LL;
        v25 = v35;
        if ( (unsigned int)v12 >= 8 )
        {
          LODWORD(v30) = 0;
          do
          {
            v31 = (unsigned int)v30;
            v30 = (unsigned int)(v30 + 8);
            *(_QWORD *)&v35[v31] = -1;
          }
          while ( (unsigned int)v30 < ((unsigned int)v12 & 0xFFFFFFF8) );
          v25 = &v35[v30];
        }
        if ( (v12 & 4) != 0 )
        {
          *(_DWORD *)v25 = -1;
          v25 += 4;
          if ( (v12 & 2) != 0 )
            goto LABEL_51;
LABEL_44:
          if ( (v12 & 1) != 0 )
LABEL_45:
            *v25 = -1;
        }
        else
        {
          if ( (v12 & 2) == 0 )
            goto LABEL_44;
LABEL_51:
          v25 += 2;
          *((_WORD *)v25 - 1) = -1;
          if ( (v12 & 1) != 0 )
            goto LABEL_45;
        }
LABEL_28:
        ++v6;
        goto LABEL_29;
      }
      if ( v8 == 1 )
      {
        if ( v9 <= 1 )
          goto LABEL_16;
        *(_DWORD *)&v35[1] = -16777216;
        v6 += 3;
        v12 = 8;
        v36 = -1;
        v37 = *(v6 - 2);
        v26 = *(v6 - 1);
        *a2 = v5 - 3;
        v38 = v26;
      }
      else
      {
        if ( v8 == 2 )
        {
          if ( v9 <= 2 )
            goto LABEL_16;
          *(_DWORD *)&v35[1] = -16777216;
          v36 = v6[1];
          v37 = v6[2];
        }
        else
        {
          if ( v8 != 3 )
          {
            if ( v8 == 4 )
            {
              if ( v9 <= 3 )
                goto LABEL_16;
              v35[2] = 0;
              v6 += 5;
              *(_WORD *)v35 = -3927;
              v12 = 8;
              v35[3] = *(v6 - 4);
              v35[4] = *(v6 - 3);
              v28 = *(v6 - 2);
              v37 = 0;
              v36 = v28;
              v29 = *(v6 - 1);
              *a2 = v5 - 5;
              v38 = v29;
            }
            else
            {
              v12 = (unsigned __int8)v8;
              ++v6;
            }
            goto LABEL_29;
          }
          if ( v9 <= 2 )
            goto LABEL_16;
          *(_DWORD *)v35 = 61609;
          v35[4] = v6[1];
          v32 = v6[2];
          v37 = 0;
          v36 = v32;
        }
        v27 = v6[3];
        v6 += 4;
        v12 = 8;
        *a2 = v5 - 4;
        v38 = v27;
      }
LABEL_29:
      mem2base(v35, *a3, *a3 + v12, -1);
      v18 = *a3 + v12;
LABEL_15:
      *a3 = v18;
      v5 = *a2;
      if ( !*a2 )
        goto LABEL_16;
    }
    v20 = v35;
    v12 = (v8 & 0x3F) + 1LL;
    if ( (unsigned int)v12 >= 8 )
    {
      LODWORD(v21) = 0;
      do
      {
        v22 = (unsigned int)v21;
        v21 = (unsigned int)(v21 + 8);
        *(_QWORD *)&v35[v22] = 0;
      }
      while ( (unsigned int)v21 < ((unsigned int)v12 & 0xFFFFFFF8) );
      v20 = &v35[v21];
    }
    if ( (v12 & 4) != 0 )
    {
      *(_DWORD *)v20 = 0;
      v20 += 4;
      if ( (v12 & 2) == 0 )
      {
LABEL_27:
        if ( (v12 & 1) == 0 )
          goto LABEL_28;
LABEL_30:
        *v20 = 0;
        goto LABEL_28;
      }
    }
    else if ( (v12 & 2) == 0 )
    {
      goto LABEL_27;
    }
    v20 += 2;
    *((_WORD *)v20 - 1) = 0;
    if ( (v12 & 1) == 0 )
      goto LABEL_28;
    goto LABEL_30;
  }
LABEL_16:
  v10 = nullptr;
  sub_2670((__int64)"Bad packed data");
  return v10;
}
