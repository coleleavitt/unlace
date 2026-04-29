int classify(int x) {
    if (x < 0)
        return -1;
    else if (x == 0)
        return 0;

    switch (x % 4) {
    case 0: return 4;
    case 1: return 5;
    case 2: return 6;
    default: return 7;
    }
}

int main(void) {
    return classify(42);
}
